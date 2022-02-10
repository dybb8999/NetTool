#pragma once
#include "MainWindowViewMode.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
// static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::NetTool::implementation
{
    struct MainWindowViewMode : MainWindowViewModeT<MainWindowViewMode>
    {
        MainWindowViewMode() = default;

        winrt::event_token PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

    private:
        winrt::event<winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;

    };
}
namespace winrt::NetTool::factory_implementation
{
    struct MainWindowViewMode : MainWindowViewModeT<MainWindowViewMode, implementation::MainWindowViewMode>
    {
    };
}
