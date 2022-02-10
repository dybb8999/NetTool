#include "pch.h"
#include "MainWindowViewMode.h"
#include "MainWindowViewMode.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
// static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::NetTool::implementation
{
    winrt::event_token MainWindowViewMode::PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        return m_propertyChanged.add(handler);
    }
    void MainWindowViewMode::PropertyChanged(winrt::event_token const& token) noexcept
    {
        m_propertyChanged.remove(token);
    }
}
