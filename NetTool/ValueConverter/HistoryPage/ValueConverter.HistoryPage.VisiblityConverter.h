#pragma once
#include "ValueConverter.HistoryPage.VisiblityConverter.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
// static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::NetTool::ValueConverter::HistoryPage::implementation
{
    struct VisiblityConverter : VisiblityConverterT<VisiblityConverter>
    {
        VisiblityConverter() = default;

        winrt::Windows::Foundation::IInspectable Convert(winrt::Windows::Foundation::IInspectable const& value, winrt::Windows::UI::Xaml::Interop::TypeName const& targetType, winrt::Windows::Foundation::IInspectable const& parameter, hstring const& language);
        winrt::Windows::Foundation::IInspectable ConvertBack(winrt::Windows::Foundation::IInspectable const& value, winrt::Windows::UI::Xaml::Interop::TypeName const& targetType, winrt::Windows::Foundation::IInspectable const& parameter, hstring const& language);
    };
}
namespace winrt::NetTool::ValueConverter::HistoryPage::factory_implementation
{
    struct VisiblityConverter : VisiblityConverterT<VisiblityConverter, implementation::VisiblityConverter>
    {
    };
}
