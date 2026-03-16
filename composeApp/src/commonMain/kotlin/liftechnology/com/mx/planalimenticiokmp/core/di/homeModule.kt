package liftechnology.com.mx.planalimenticiokmp.core.di

import liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.menu.MenuViewModel
import liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.search.SearchViewModel
import liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.shared.SharedViewModel
import liftechnology.com.mx.planalimenticiokmp.presentation.viewmodel.subMenu.SubMenuViewModel
import org.koin.core.module.dsl.viewModelOf
import org.koin.dsl.module


val homeModule = module{
    viewModelOf(::SharedViewModel)
    viewModelOf(::MenuViewModel)
    viewModelOf(::SubMenuViewModel)
    viewModelOf(::SearchViewModel)
}