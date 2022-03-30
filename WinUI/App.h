﻿#pragma once
#include "App.xaml.g.h"

namespace winrt::RTX_2090_TiFy::implementation {
struct App : AppT<App> {
    App();

    void OnLaunched(
        Windows::ApplicationModel::Activation::LaunchActivatedEventArgs const
            &);
    void OnSuspending(IInspectable const &,
                      Windows::ApplicationModel::SuspendingEventArgs const &);
    void OnNavigationFailed(
        IInspectable const &,
        Windows::UI::Xaml::Navigation::NavigationFailedEventArgs const &);
};
}  // namespace winrt::RTX_2090_TiFy::implementation
