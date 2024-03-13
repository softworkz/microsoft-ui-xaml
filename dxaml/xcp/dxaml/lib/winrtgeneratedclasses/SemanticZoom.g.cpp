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

#include "SemanticZoom.g.h"
#include "XamlTelemetry.h"

// Constructors/destructors.
DirectUI::SemanticZoomGenerated::SemanticZoomGenerated()
{
}

DirectUI::SemanticZoomGenerated::~SemanticZoomGenerated()
{
}

HRESULT DirectUI::SemanticZoomGenerated::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(DirectUI::SemanticZoom)))
    {
        *ppObject = static_cast<DirectUI::SemanticZoom*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISemanticZoom)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISemanticZoom*>(this);
    }
    else if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::Internal::FrameworkUdk::IBackButtonPressedListener)))
    {
        *ppObject = static_cast<ABI::Microsoft::Internal::FrameworkUdk::IBackButtonPressedListener*>(this);
    }
    else
    {
        RRETURN(DirectUI::Control::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}

// Properties.
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::get_CanChangeViews(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_CanChangeViews, pValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::put_CanChangeViews(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_CanChangeViews, value));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::get_IsZoomedInViewActive(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_IsZoomedInViewActive, pValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::put_IsZoomedInViewActive(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_IsZoomedInViewActive, value));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::get_IsZoomOutButtonEnabled(_Out_ BOOLEAN* pValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_IsZoomOutButtonEnabled, pValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::put_IsZoomOutButtonEnabled(_In_ BOOLEAN value)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_IsZoomOutButtonEnabled, value));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::get_ZoomedInView(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomInformation** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_ZoomedInView, ppValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::put_ZoomedInView(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomInformation* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_ZoomedInView, pValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::get_ZoomedOutView(_Outptr_result_maybenull_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomInformation** ppValue)
{
    RRETURN(GetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_ZoomedOutView, ppValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::put_ZoomedOutView(_In_opt_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomInformation* pValue)
{
    IFC_RETURN(DefaultStrictApiCheck(this));
    RRETURN(SetValueByKnownIndex(KnownPropertyIndex::SemanticZoom_ZoomedOutView, pValue));
}

// Events.
_Check_return_ HRESULT DirectUI::SemanticZoomGenerated::GetViewChangeCompletedEventSourceNoRef(_Outptr_ ViewChangeCompletedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::SemanticZoom_ViewChangeCompleted, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ViewChangeCompletedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::SemanticZoom_ViewChangeCompleted, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::SemanticZoom_ViewChangeCompleted, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::SemanticZoomGenerated::add_ViewChangeCompleted(_In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ViewChangeCompletedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetViewChangeCompletedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::SemanticZoomGenerated::remove_ViewChangeCompleted(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ViewChangeCompletedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetViewChangeCompletedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::SemanticZoom_ViewChangeCompleted));
    }

Cleanup:
    RRETURN(hr);
}
_Check_return_ HRESULT DirectUI::SemanticZoomGenerated::GetViewChangeStartedEventSourceNoRef(_Outptr_ ViewChangeStartedEventSourceType** ppEventSource)
{
    HRESULT hr = S_OK;

    IFC(GetEventSourceNoRefWithArgumentValidation(KnownEventIndex::SemanticZoom_ViewChangeStarted, reinterpret_cast<IUntypedEventSource**>(ppEventSource)));

    if (*ppEventSource == nullptr)
    {
        IFC(ctl::ComObject<ViewChangeStartedEventSourceType>::CreateInstance(ppEventSource, TRUE /* fDisableLeakChecks */));
        (*ppEventSource)->Initialize(KnownEventIndex::SemanticZoom_ViewChangeStarted, this, /* bUseEventManager */ false);
        IFC(StoreEventSource(KnownEventIndex::SemanticZoom_ViewChangeStarted, *ppEventSource));

        // The caller doesn't expect a ref, this function ends in "NoRef".  The ref is now owned by the map (inside StoreEventSource)
        ReleaseInterfaceNoNULL(ctl::iunknown_cast(*ppEventSource));
    }

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::SemanticZoomGenerated::add_ViewChangeStarted(_In_ ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler* pValue, _Out_ EventRegistrationToken* ptToken)
{
    HRESULT hr = S_OK;
    ViewChangeStartedEventSourceType* pEventSource = nullptr;

    IFC(EventAddPreValidation(pValue, ptToken));
    IFC(DefaultStrictApiCheck(this));
    IFC(GetViewChangeStartedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->AddHandler(pValue));

    ptToken->value = (INT64)pValue;

Cleanup:
    return hr;
}

IFACEMETHODIMP DirectUI::SemanticZoomGenerated::remove_ViewChangeStarted(_In_ EventRegistrationToken tToken)
{
    HRESULT hr = S_OK;
    ViewChangeStartedEventSourceType* pEventSource = nullptr;
    ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler* pValue = (ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler*)tToken.value;

    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(GetViewChangeStartedEventSourceNoRef(&pEventSource));
    IFC(pEventSource->RemoveHandler(pValue));

    if (!pEventSource->HasHandlers())
    {
        IFC(RemoveEventSource(KnownEventIndex::SemanticZoom_ViewChangeStarted));
    }

Cleanup:
    RRETURN(hr);
}

// Methods.
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::OnBackButtonPressed(_Out_ BOOLEAN* pResult)
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "SemanticZoom_OnBackButtonPressed", 0);
    }
    ARG_VALIDRETURNPOINTER(pResult);
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SemanticZoom*>(this)->OnBackButtonPressedImpl(pResult));
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "SemanticZoom_OnBackButtonPressed", hr);
    }
    RRETURN(hr);
}
IFACEMETHODIMP DirectUI::SemanticZoomGenerated::ToggleActiveView()
{
    HRESULT hr = S_OK;
    if (EventEnabledApiFunctionCallStart())
    {
        XamlTelemetry::PublicApiCall(true, reinterpret_cast<uint64_t>(this), "SemanticZoom_ToggleActiveView", 0);
    }
    
    IFC(CheckThread());
    IFC(DefaultStrictApiCheck(this));
    IFC(static_cast<SemanticZoom*>(this)->ToggleActiveViewImpl());
Cleanup:
    if (EventEnabledApiFunctionCallStop())
    {
        XamlTelemetry::PublicApiCall(false, reinterpret_cast<uint64_t>(this), "SemanticZoom_ToggleActiveView", hr);
    }
    RRETURN(hr);
}

_Check_return_ HRESULT DirectUI::SemanticZoomGenerated::EventAddHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler, _In_ BOOLEAN handledEventsToo)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::SemanticZoom_ViewChangeCompleted:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                ViewChangeCompletedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetViewChangeCompletedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::SemanticZoom_ViewChangeStarted:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                ViewChangeStartedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetViewChangeStartedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->AddHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ControlGenerated::EventAddHandlerByIndex(nEventIndex, pHandler, handledEventsToo));
        break;
    }

    return S_OK;
}

_Check_return_ HRESULT DirectUI::SemanticZoomGenerated::EventRemoveHandlerByIndex(_In_ KnownEventIndex nEventIndex, _In_ IInspectable* pHandler)
{
    switch (nEventIndex)
    {
    case KnownEventIndex::SemanticZoom_ViewChangeCompleted:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                ViewChangeCompletedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetViewChangeCompletedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    case KnownEventIndex::SemanticZoom_ViewChangeStarted:
        {
            ctl::ComPtr<ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomViewChangedEventHandler> spEventHandler;
            IValueBoxer::UnboxValue(pHandler, spEventHandler.ReleaseAndGetAddressOf());

            if (nullptr != spEventHandler)
            {
                ViewChangeStartedEventSourceType* pEventSource = nullptr;
                IFC_RETURN(GetViewChangeStartedEventSourceNoRef(&pEventSource));
                IFC_RETURN(pEventSource->RemoveHandler(spEventHandler.Get()));
            }
            else
            {
                IFC_RETURN(E_INVALIDARG);
            }
        }
        break;
    default:
        IFC_RETURN(DirectUI::ControlGenerated::EventRemoveHandlerByIndex(nEventIndex, pHandler));
        break;
    }

    return S_OK;
}

HRESULT DirectUI::SemanticZoomFactory::QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject)
{
    if (InlineIsEqualGUID(iid, __uuidof(ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomStatics)))
    {
        *ppObject = static_cast<ABI::Microsoft::UI::Xaml::Controls::ISemanticZoomStatics*>(this);
    }
    else
    {
        RRETURN(ctl::BetterCoreObjectActivationFactory::QueryInterfaceImpl(iid, ppObject));
    }

    AddRefOuter();
    RRETURN(S_OK);
}


// Factory methods.

// Dependency properties.
IFACEMETHODIMP DirectUI::SemanticZoomFactory::get_ZoomedInViewProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SemanticZoom_ZoomedInView, ppValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomFactory::get_ZoomedOutViewProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SemanticZoom_ZoomedOutView, ppValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomFactory::get_IsZoomedInViewActiveProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SemanticZoom_IsZoomedInViewActive, ppValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomFactory::get_CanChangeViewsProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SemanticZoom_CanChangeViews, ppValue));
}
IFACEMETHODIMP DirectUI::SemanticZoomFactory::get_IsZoomOutButtonEnabledProperty(_Out_ ABI::Microsoft::UI::Xaml::IDependencyProperty** ppValue)
{
    RRETURN(MetadataAPI::GetIDependencyProperty(KnownPropertyIndex::SemanticZoom_IsZoomOutButtonEnabled, ppValue));
}

// Attached properties.

// Static properties.

// Static methods.

namespace DirectUI
{
    _Check_return_ IActivationFactory* CreateActivationFactory_SemanticZoom()
    {
        RRETURN(ctl::ActivationFactoryCreator<SemanticZoomFactory>::CreateActivationFactory());
    }
}