import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidApplication)
    alias(libs.plugins.composeMultiplatform)
    alias(libs.plugins.composeCompiler)
    alias(libs.plugins.sqldelight)
    alias(libs.plugins.kotlinSerialization)
}

kotlin {
    androidTarget()

    iosArm64()
    iosSimulatorArm64()

    targets.withType<org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget>().configureEach {
        binaries.framework {
            baseName = "ComposeApp"
            isStatic = false

            linkerOpts += listOf("-lsqlite3")
        }
    }


    sourceSets {
        androidMain.dependencies {
            implementation(libs.compose.uiToolingPreview)
            implementation(libs.androidx.activity.compose)
            implementation(libs.sqldelight.android.driver)

        }
        commonMain.dependencies {
            implementation(libs.compose.runtime)
            implementation(libs.compose.foundation)
            implementation(libs.compose.material3)
            implementation(libs.compose.ui)
            implementation(libs.compose.components.resources)
            implementation(libs.compose.uiToolingPreview)
            implementation(libs.androidx.lifecycle.viewmodelCompose)
            implementation(libs.androidx.lifecycle.runtimeCompose)
            implementation(libs.bundles.kmp)
            implementation(compose.components.resources)
            implementation(compose.materialIconsExtended)
            implementation(libs.bundles.gson)
            implementation(libs.bundles.logs)

            implementation(libs.kotlin.stdlib)

            // Kotlinx Coroutines
            implementation(libs.kotlinx.coroutines.core)

            // Koin Multiplatform
            implementation(libs.koin.core.kmp)

            // Kotlinx Serialization
            implementation(libs.kotlinx.serialization.json)

            // SQLDelight Runtime (necesario para asFlow, executeAsList, etc.)
            implementation(libs.sqldelight.runtime)
            implementation(libs.sqldelight.coroutines.extensions)

            api(libs.precompose)
        }
        iosMain {
            dependencies {
                implementation(libs.sqldelight.native.driver)
            }
        }
        commonTest.dependencies {
            implementation(libs.kotlin.test)
        }
    }
}

// Configuración de SQLDelight
sqldelight {
    databases {
        create("FoodDatabase") {
            packageName.set("litechnology.com.mx.planalimenticiokmp.data.local.database")
        }
    }
}

android {
    namespace = "litechnology.com.mx.planalimenticiokmp"
    compileSdk = libs.versions.android.compileSdk.get().toInt()

    defaultConfig {
        applicationId = "litechnology.com.mx.planalimenticiokmp"
        minSdk = libs.versions.android.minSdk.get().toInt()
        targetSdk = libs.versions.android.targetSdk.get().toInt()
        versionCode = 1
        versionName = "1.0"
    }
    packaging {
        resources {
            excludes += "/META-INF/{AL2.0,LGPL2.1}"
        }
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }
}

dependencies {
    debugImplementation(libs.compose.uiTooling)
}
