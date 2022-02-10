#include "pch.h"
#include "HistoryInfo.h"
#include "HistoryInfo.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
// static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::NetTool::implementation
{
    winrt::hstring HistoryInfo::Type()
    {
        return m_type;
    }

    void HistoryInfo::Type(winrt::hstring const& value)
    {
        m_type = value;
    }
}
