#pragma once

#include "HistoryPage.g.h"
#include "ViewMode/HistoryPageViewMode.h"
#include "ValueConverter/HistoryPage/ValueConverter.HistoryPage.VisiblityConverter.h"

namespace winrt::NetTool::implementation
{
    struct HistoryPage : HistoryPageT<HistoryPage>
    {
        HistoryPage();

    private:
        NetTool::HistoryPageViewMode m_viewMode{ nullptr };
    };
}

namespace winrt::NetTool::factory_implementation
{
    struct HistoryPage : HistoryPageT<HistoryPage, implementation::HistoryPage>
    {
    };
}
