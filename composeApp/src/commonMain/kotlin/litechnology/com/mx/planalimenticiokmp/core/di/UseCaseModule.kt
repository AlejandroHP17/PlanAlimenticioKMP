package litechnology.com.mx.planalimenticiokmp.core.di

import litechnology.com.mx.planalimenticiokmp.domain.usecase.category.GetAllCategoriesUseCase
import litechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetAllFoodsUseCase
import litechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodByIdUseCase
import litechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodCountByCategoryUseCase
import litechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodsByCategoryUseCase
import litechnology.com.mx.planalimenticiokmp.domain.usecase.food.SearchFoodsUseCase
import litechnology.com.mx.planalimenticiokmp.domain.usecase.initialize.InitializeDataBaseUseCase
import litechnology.com.mx.planalimenticiokmp.util.AppDispatchers
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module

val useCaseModule = module {
    // AppDispatchers (expect/actual)
    single { AppDispatchers }
    
    // Use Cases
    singleOf(::GetFoodsByCategoryUseCase)
    singleOf(::GetAllFoodsUseCase)
    singleOf(::SearchFoodsUseCase)
    singleOf(::GetFoodByIdUseCase)
    singleOf(::GetAllCategoriesUseCase)
    singleOf(::GetFoodCountByCategoryUseCase)
    singleOf(::InitializeDataBaseUseCase)
}
