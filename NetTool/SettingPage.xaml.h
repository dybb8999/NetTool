#pragma once

#include "SettingPage.g.h"

namespace winrt::NetTool::implementation
{
    struct SettingPage : SettingPageT<SettingPage>
    {
        SettingPage();
    };
}

namespace winrt::NetTool::factory_implementation
{
    struct SettingPage : SettingPageT<SettingPage, implementation::SettingPage>
    {
    };
}
