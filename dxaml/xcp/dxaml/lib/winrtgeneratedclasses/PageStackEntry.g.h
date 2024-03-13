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


#define __PageStackEntry_GUID "548ad04e-f6f3-4d0e-a146-7b641c0b970a"

namespace DirectUI
{
    class PageStackEntry;
    class NavigationTransitionInfo;

    class __declspec(novtable) PageStackEntryGenerated:
        public DirectUI::DependencyObject
        , public ABI::Microsoft::UI::Xaml::Navigation::IPageStackEntry
    {
        friend class DirectUI::PageStackEntry;

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Navigation.PageStackEntry");

        BEGIN_INTERFACE_MAP(PageStackEntryGenerated, DirectUI::DependencyObject)
            INTERFACE_ENTRY(PageStackEntryGenerated, ABI::Microsoft::UI::Xaml::Navigation::IPageStackEntry)
        END_INTERFACE_MAP(PageStackEntryGenerated, DirectUI::DependencyObject)

    public:
        PageStackEntryGenerated();
        ~PageStackEntryGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PageStackEntry;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::PageStackEntry;
        }

        // Properties.
        IFACEMETHOD(get_NavigationTransitionInfo)(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo** ppValue) override;
        _Check_return_ HRESULT put_NavigationTransitionInfo(_In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo* pValue);
        IFACEMETHOD(get_Parameter)(_Outptr_result_maybenull_ IInspectable** ppValue) override;
        _Check_return_ HRESULT put_Parameter(_In_opt_ IInspectable* pValue);
        IFACEMETHOD(get_SourcePageType)(_Out_ ABI::Windows::UI::Xaml::Interop::TypeName* pValue) override;
        _Check_return_ HRESULT put_SourcePageType(_In_ ABI::Windows::UI::Xaml::Interop::TypeName value);

        // Events.

        // Methods.


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
        TrackerPtr<ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo> m_pNavigationTransitionInfo;
        TrackerPtr<IInspectable> m_pParameter;
    };
}

#include "PageStackEntry_Partial.h"

namespace DirectUI
{
    // Note that the ordering of the base types here is important - the base factory comes first, followed by all the
    // interfaces specific to this type.  By doing this, we allow every Factory's CreateInstance method to be more
    // COMDAT-folding-friendly.  Because this ensures that the first vfptr contains GetTypeIndex, it means that all
    // CreateInstance functions with the same base factory generate the same assembly instructions and thus will
    // fold together.  This is significant for binary size in Microsoft.UI.Xaml.dll so change this only with great
    // care.
    class __declspec(novtable) PageStackEntryFactory:
       public ctl::AbstractActivationFactory
        , public ABI::Microsoft::UI::Xaml::Navigation::IPageStackEntryFactory
        , public ABI::Microsoft::UI::Xaml::Navigation::IPageStackEntryStatics
    {
        BEGIN_INTERFACE_MAP(PageStackEntryFactory, ctl::AbstractActivationFactory)
            INTERFACE_ENTRY(PageStackEntryFactory, ABI::Microsoft::UI::Xaml::Navigation::IPageStackEntryFactory)
            INTERFACE_ENTRY(PageStackEntryFactory, ABI::Microsoft::UI::Xaml::Navigation::IPageStackEntryStatics)
        END_INTERFACE_MAP(PageStackEntryFactory, ctl::AbstractActivationFactory)

    public:
        // Factory methods.
        IFACEMETHOD(CreateInstance)(_In_ ABI::Windows::UI::Xaml::Interop::TypeName sourcePageType, _In_opt_ IInspectable* pParameter, _In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo* pNavigationTransitionInfo, _Outptr_ ABI::Microsoft::UI::Xaml::Navigation::IPageStackEntry** ppInstance);

        // Static properties.

        // Dependency properties.
        IFACEMETHOD(get_SourcePageTypeProperty)(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue) override;

        // Attached properties.

        // Static methods.

        // Static events.

    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PageStackEntry;
        }


    private:
        _Check_return_ HRESULT CreateInstanceImpl(_In_ ABI::Windows::UI::Xaml::Interop::TypeName sourcePageType, _In_opt_ IInspectable* pParameter, _In_opt_ ABI::Microsoft::UI::Xaml::Media::Animation::INavigationTransitionInfo* pNavigationTransitionInfo, _Outptr_ ABI::Microsoft::UI::Xaml::Navigation::IPageStackEntry** ppInstance);

        // Customized static properties.

        // Customized static  methods.
    };
}