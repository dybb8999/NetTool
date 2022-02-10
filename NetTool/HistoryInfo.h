#pragma once
#include "HistoryInfo.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
// static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::NetTool::implementation
{
    struct HistoryInfo : HistoryInfoT<HistoryInfo>
    {
        HistoryInfo() = default;

        winrt::hstring Type();
        void Type(winrt::hstring const& value);

    private:
        winrt::hstring m_type;
    };
}
namespace winrt::NetTool::factory_implementation
{
    struct HistoryInfo : HistoryInfoT<HistoryInfo, implementation::HistoryInfo>
    {
    };
}
