package litechnology.com.mx.planalimenticiokmp.di

import litechnology.com.mx.planalimenticiokmp.presentation.viewmodel.menu.MenuViewModel
import org.koin.core.module.dsl.viewModelOf
import org.koin.dsl.module


val homeModule = module{
    //viewModelOf(::SharedViewModel)
    viewModelOf(::MenuViewModel)
    //viewModelOf(::SubMenuViewModel)
    //viewModelOf(::SearchViewModel)
}