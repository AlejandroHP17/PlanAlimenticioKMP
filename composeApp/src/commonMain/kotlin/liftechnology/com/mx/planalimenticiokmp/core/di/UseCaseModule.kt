package liftechnology.com.mx.planalimenticiokmp.core.di

import liftechnology.com.mx.planalimenticiokmp.domain.usecase.category.GetAllCategoriesUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetAllFoodsUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodByIdUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodCountByCategoryUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.GetFoodsByCategoryUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.food.SearchFoodsUseCase
import liftechnology.com.mx.planalimenticiokmp.domain.usecase.initialize.InitializeDataBaseUseCase
import liftechnology.com.mx.planalimenticiokmp.core.util.AppDispatchers
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
