﻿#include "pch.h"
#include "HistoryPage.xaml.h"
#if __has_include("HistoryPage.g.cpp")
#include "HistoryPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::NetTool::implementation
{
    HistoryPage::HistoryPage()
    {
        InitializeComponent();
        m_viewMode = winrt::make<HistoryPageViewMode>();
        
        this->DataContext(m_viewMode);
    }
}
