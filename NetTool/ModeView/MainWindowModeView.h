#pragma once
#include "MainWindowModeView.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.

namespace winrt::NetTool::implementation
{
    struct MainWindowModeView : MainWindowModeViewT<MainWindowModeView>
    {
        MainWindowModeView() = default;

        winrt::event_token PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

    private:
        winrt::event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> property_changed_;
    };
}
namespace winrt::NetTool::factory_implementation
{
    struct MainWindowModeView : MainWindowModeViewT<MainWindowModeView, implementation::MainWindowModeView>
    {
    };
}
