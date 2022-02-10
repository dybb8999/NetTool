#include "pch.h"
#include "HistoryPageViewMode.h"
#include "HistoryPageViewMode.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
// static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::NetTool::implementation
{
    HistoryPageViewMode::HistoryPageViewMode()
    {
        m_historys = winrt::single_threaded_observable_vector<NetTool::HistoryInfo>();
    }

    winrt::Windows::Foundation::Collections::IObservableVector<winrt::NetTool::HistoryInfo> HistoryPageViewMode::Historys()
    {
        return m_historys;
    }

    winrt::event_token HistoryPageViewMode::PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        return m_propertyChanged.add(handler);
    }

    void HistoryPageViewMode::PropertyChanged(winrt::event_token const& token) noexcept
    {
        m_propertyChanged.remove(token);
    }
}
