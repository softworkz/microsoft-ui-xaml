// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.
//------------------------------------------------------------------------
//
//  Abstract:
//
//      XAML types.
//      NOTE: This file was generated by a tool.
//
//------------------------------------------------------------------------

#pragma once

#include "RoutedEventArgs.g.h"

#define __ItemClickEventArgs_GUID "1ada909e-7ad1-469c-83bd-85c13a6f172c"

namespace DirectUI
{
    class ItemClickEventArgs;

    class __declspec(novtable) __declspec(uuid(__ItemClickEventArgs_GUID)) ItemClickEventArgs :
        public ABI::Microsoft::UI::Xaml::Controls::IItemClickEventArgs,
        public DirectUI::RoutedEventArgs
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.ItemClickEventArgs");

        BEGIN_INTERFACE_MAP(ItemClickEventArgs, DirectUI::RoutedEventArgs)
            INTERFACE_ENTRY(ItemClickEventArgs, ABI::Microsoft::UI::Xaml::Controls::IItemClickEventArgs)
        END_INTERFACE_MAP(ItemClickEventArgs, DirectUI::RoutedEventArgs)

    public:
        ItemClickEventArgs();
        ~ItemClickEventArgs() override;

        // Properties.
        IFACEMETHOD(get_ClickedItem)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        _Check_return_ HRESULT put_ClickedItem(_In_opt_ IInspectable* pValue);

        // Methods.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
        TrackerPtr<IInspectable> m_pClickedItem;
    };
}

