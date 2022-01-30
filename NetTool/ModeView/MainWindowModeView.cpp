#include "pch.h"
#include "MainWindowModeView.h"
#include "MainWindowModeView.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.

namespace winrt::NetTool::implementation
{
    winrt::event_token MainWindowModeView::PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        return property_changed_.add(handler);
    }
    void MainWindowModeView::PropertyChanged(winrt::event_token const& token) noexcept
    {
        property_changed_.remove(token);
    }
}
