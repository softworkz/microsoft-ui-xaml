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

#include "Thickness.g.h"

#define __AppBarTemplateSettings_GUID "7b4c2f42-033d-404e-b24f-53f702e62938"

namespace DirectUI
{
    class AppBarTemplateSettings;

    class __declspec(novtable) __declspec(uuid(__AppBarTemplateSettings_GUID)) AppBarTemplateSettings:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Controls.Primitives.AppBarTemplateSettings");

        BEGIN_INTERFACE_MAP(AppBarTemplateSettings, DirectUI::DependencyObject)
            INTERFACE_ENTRY(AppBarTemplateSettings, ABI::Microsoft::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings)
        END_INTERFACE_MAP(AppBarTemplateSettings, DirectUI::DependencyObject)

    public:
        AppBarTemplateSettings();
        ~AppBarTemplateSettings() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarTemplateSettings;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::AppBarTemplateSettings;
        }

        // Properties.
        IFACEMETHOD(get_ClipRect)(_Out_ ABI::Windows::Foundation::Rect* pValue) override;
        _Check_return_ HRESULT put_ClipRect(_In_ ABI::Windows::Foundation::Rect value);
        IFACEMETHOD(get_CompactRootMargin)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        _Check_return_ HRESULT put_CompactRootMargin(_In_ ABI::Microsoft::UI::Xaml::Thickness value);
        IFACEMETHOD(get_CompactVerticalDelta)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_CompactVerticalDelta(_In_ DOUBLE value);
        IFACEMETHOD(get_HiddenRootMargin)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        _Check_return_ HRESULT put_HiddenRootMargin(_In_ ABI::Microsoft::UI::Xaml::Thickness value);
        IFACEMETHOD(get_HiddenVerticalDelta)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_HiddenVerticalDelta(_In_ DOUBLE value);
        IFACEMETHOD(get_MinimalRootMargin)(_Out_ ABI::Microsoft::UI::Xaml::Thickness* pValue) override;
        _Check_return_ HRESULT put_MinimalRootMargin(_In_ ABI::Microsoft::UI::Xaml::Thickness value);
        IFACEMETHOD(get_MinimalVerticalDelta)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_MinimalVerticalDelta(_In_ DOUBLE value);
        IFACEMETHOD(get_NegativeCompactVerticalDelta)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_NegativeCompactVerticalDelta(_In_ DOUBLE value);
        IFACEMETHOD(get_NegativeHiddenVerticalDelta)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_NegativeHiddenVerticalDelta(_In_ DOUBLE value);
        IFACEMETHOD(get_NegativeMinimalVerticalDelta)(_Out_ DOUBLE* pValue) override;
        _Check_return_ HRESULT put_NegativeMinimalVerticalDelta(_In_ DOUBLE value);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:
        // Customized properties.

        // Customized methods.

        // Fields.
    };
}


namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) AppBarTemplateSettingsFactory:
       public ctl::AbstractActivationFactory
    {

    public:
        // Factory methods.

        // Static properties.

        // Dependency properties.
        
        
        
        
        
        
        
        
        
        

        // Attached properties.

        // Static methods.

        // Static events.

    protected:

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarTemplateSettings;
        }


    private:

        // Customized static properties.

        // Customized static  methods.
    };
}