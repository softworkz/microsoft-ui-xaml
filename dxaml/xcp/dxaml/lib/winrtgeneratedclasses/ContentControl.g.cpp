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

#include "ContentControl.g.h"
#include "DataTemplate.g.h"
#include "DataTemplateSelector.g.h"
#include "TransitionCollection.g.h"
#include "UIElement.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::ContentControlGenerated::ContentControlGenerated()
{
}

DirectUI::ContentControlGenerated::~ContentControlGenerated()
{
}

HRESULT DirectUI::ContentControlGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::ContentControl)))
    {
        *ppObject = static_cast<DirectUI::ContentControl*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentControl)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentControl*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentControlOverrides)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentControlOverrides*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentControlPrivate)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentControlPrivate*>(this);
    }
    else
    {
        RRETURN(DirectUI::Control::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::ContentControlGenerated::get_Content(_Outptr_result_maybenull_ IInspectable** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentControl_Content, ppValue));
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::put_Content(_In_opt_ IInspectable* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentControl_Content, pValue));
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::get_ContentTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentControl_ContentTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::put_ContentTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentControl_ContentTemplate, pValue));
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::get_ContentTemplateRoot(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IUIElement** ppValue)
{
    HRESULT hr = S_OK;
    ARG_VALIDRETURNPOINTER(ppValue);
    IFC(CheckThread());
    IFC(static_cast<ContentControl*>(this)->get_ContentTemplateRootImpl(ppValue));
Cleanup:
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::get_ContentTemplateSelector(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentControl_ContentTemplateSelector, ppValue));
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::put_ContentTemplateSelector(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentControl_ContentTemplateSelector, pValue));
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::get_ContentTransitions(_Outptr_result_maybenull_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentControl_ContentTransitions, ppValue));
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::put_ContentTransitions(_In_opt_ ABI::Windows::Foundation::Collections::IVector<ABI::Microsoft::UI::Xaml::Media::Animation::Transition*>* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentControl_ContentTransitions, pValue));
}
_Check_return_ HRESULT DirectUI::ContentControlGenerated::get_SelectedContentTemplate(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::IDataTemplate** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::ContentControl_SelectedContentTemplate, ppValue));
}
_Check_return_ HRESULT DirectUI::ContentControlGenerated::put_SelectedContentTemplate(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pValue)
{
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::ContentControl_SelectedContentTemplate, pValue));
}

// Events.

// Methods.
IFACEMETHODIMP DirectUI::ContentControlGenerated::GetGlobalBounds(_Out_ ABI::Windows::Foundation::Rect* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ContentControl_GetGlobalBounds", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ContentControl*>(this)->GetGlobalBoundsImpl(pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ContentControl_GetGlobalBounds", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::GetRasterizationScale(_Out_ FLOAT* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ContentControl_GetRasterizationScale", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ContentControl*>(this)->GetRasterizationScaleImpl(pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ContentControl_GetRasterizationScale", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::OnContentChanged(_In_opt_ IInspectable* pOldContent, _In_opt_ IInspectable* pNewContent)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ContentControl_OnContentChanged", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ContentControl*>(this)->OnContentChangedImpl(pOldContent, pNewContent));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ContentControl_OnContentChanged", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::ContentControlGenerated::OnContentChangedProtected(_In_opt_ IInspectable* pOldContent, _In_opt_ IInspectable* pNewContent)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IContentControlOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnContentChanged(pOldContent, pNewContent));
    }
    else
    {
        IFC(OnContentChanged(pOldContent, pNewContent));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::OnContentTemplateChanged(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pOldContentTemplate, _In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pNewContentTemplate)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ContentControl_OnContentTemplateChanged", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ContentControl*>(this)->OnContentTemplateChangedImpl(pOldContentTemplate, pNewContentTemplate));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ContentControl_OnContentTemplateChanged", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::ContentControlGenerated::OnContentTemplateChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pOldContentTemplate, _In_opt_ ABI::Microsoft::UI::Xaml::IDataTemplate* pNewContentTemplate)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IContentControlOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnContentTemplateChanged(pOldContentTemplate, pNewContentTemplate));
    }
    else
    {
        IFC(OnContentTemplateChanged(pOldContentTemplate, pNewContentTemplate));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::ContentControlGenerated::OnContentTemplateSelectorChanged(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pOldContentTemplateSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pNewContentTemplateSelector)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "ContentControl_OnContentTemplateSelectorChanged", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<ContentControl*>(this)->OnContentTemplateSelectorChangedImpl(pOldContentTemplateSelector, pNewContentTemplateSelector));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "ContentControl_OnContentTemplateSelectorChanged", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::ContentControlGenerated::OnContentTemplateSelectorChangedProtected(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pOldContentTemplateSelector, _In_opt_ ABI::Microsoft::UI::Xaml::Controls::IDataTemplateSelector* pNewContentTemplateSelector)
{
    HRESULT hr = S_OK;
    ABI::Microsoft::UI::Xaml::Controls::IContentControlOverrides* pVirtuals = NULL;

    if (IsComposed())
    {
        IFC(ctl::do_query_interface(pVirtuals, this));

        // SYNC_CALL_TO_APP DIRECT - This next line may directly call out to app code.
        IFC(pVirtuals->OnContentTemplateSelectorChanged(pOldContentTemplateSelector, pNewContentTemplateSelector));
    }
    else
    {
        IFC(OnContentTemplateSelectorChanged(pOldContentTemplateSelector, pNewContentTemplateSelector));
    }

Cleanup:
    ReleaseInterfaceNoNULL(pVirtuals);
    RRETURN(hr);
}

HRESULT DirectUI::ContentControlFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentControlFactory)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentControlFactory*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentControlStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::IContentControlStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterAggregableCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.
IFACEMETHODIMP DirectUI::ContentControlFactory::CreateInstance(_In_opt_ IInspectable* pOuter, _Outptr_ IInspectable** ppInner, _Outptr_ ABI::Microsoft::UI::Xaml::Controls::IContentControl** ppInstance)
{

#if DBG
    // We play some games with reinterpret_cast and assuming that the GUID type table is accurate - which is somewhat sketchy, but
    // really good for binary size.  This code is a sanity check that the games we play are ok.
    const GUID uuidofGUID = __uuidof(ABI::Microsoft::UI::Xaml::Controls::IContentControl);
    const GUID metadataAPIGUID = MetadataAPI::GetClassInfoByIndex(GetTypeIndex())->GetGuid();
    const KnownTypeIndex typeIndex = GetTypeIndex();

    if(uuidofGUID != metadataAPIGUID)
    {
        XAML_FAIL_FAST();
    }
#endif

    // Can't just IFC(_RETURN) this because for some validate calls (those with multiple template parameters), the
    // preprocessor gets confused at the "," in the template type-list before the function's opening parenthesis.
    // So we'll use IFC_RETURN syntax with a local hr variable, kind of weirdly.
    const HRESULT hr = ctl::ValidateFactoryCreateInstanceWithBetterAggregableCoreObjectActivationFactory(pOuter, ppInner, reinterpret_cast<IUnknown**>(ppInstance), GetTypeIndex(), false /*isFreeThreaded*/);
    IFC_RETURN(hr);
    return S_OK;
}

// Dependency properties.
IFACEMETHODIMP DirectUI::ContentControlFactory::get_ContentProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentControl_Content, ppValue));
}
IFACEMETHODIMP DirectUI::ContentControlFactory::get_ContentTemplateProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentControl_ContentTemplate, ppValue));
}
IFACEMETHODIMP DirectUI::ContentControlFactory::get_ContentTemplateSelectorProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentControl_ContentTemplateSelector, ppValue));
}

IFACEMETHODIMP DirectUI::ContentControlFactory::get_ContentTransitionsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::ContentControl_ContentTransitions, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_ContentControl()
    {
        RRETURN(ctl::ActivationFactoryCreator<ContentControlFactory>::CreateActivationFactory());
    }
}