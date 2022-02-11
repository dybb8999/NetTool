#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include "SettingPage.xaml.h"


using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::NetTool::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    void MainWindow::OnShowSettingPage(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args)
    {
        mainFrame().Navigate(xaml_typename<NetTool::SettingPage>(), nullptr, Microsoft::UI::Xaml::Media::Animation::DrillInNavigationTransitionInfo(nullptr));
    }
}
