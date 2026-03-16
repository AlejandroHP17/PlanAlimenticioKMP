package litechnology.com.mx.planalimenticiokmp.core.di

import litechnology.com.mx.planalimenticiokmp.presentation.viewmodel.menu.MenuViewModel
import litechnology.com.mx.planalimenticiokmp.presentation.viewmodel.search.SearchViewModel
import litechnology.com.mx.planalimenticiokmp.presentation.viewmodel.shared.SharedViewModel
import litechnology.com.mx.planalimenticiokmp.presentation.viewmodel.subMenu.SubMenuViewModel
import org.koin.core.module.dsl.viewModelOf
import org.koin.dsl.module


val homeModule = module{
    viewModelOf(::SharedViewModel)
    viewModelOf(::MenuViewModel)
    viewModelOf(::SubMenuViewModel)
    viewModelOf(::SearchViewModel)
}