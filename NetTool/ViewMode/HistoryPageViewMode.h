#pragma once
#include "HistoryPageViewMode.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
// static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::NetTool::implementation
{
    struct HistoryPageViewMode : HistoryPageViewModeT<HistoryPageViewMode>
    {
        HistoryPageViewMode();

        winrt::Windows::Foundation::Collections::IObservableVector<winrt::NetTool::HistoryInfo> Historys();

        winrt::event_token PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;
    private:
        winrt::event<winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
        winrt::Windows::Foundation::Collections::IObservableVector<winrt::NetTool::HistoryInfo> m_historys;
    };
}
namespace winrt::NetTool::factory_implementation
{
    struct HistoryPageViewMode : HistoryPageViewModeT<HistoryPageViewMode, implementation::HistoryPageViewMode>
    {
    };
}
