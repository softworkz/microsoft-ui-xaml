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

#include "FrameworkElementAutomationPeer.g.h"

#define __AppBarLightDismissAutomationPeer_GUID "00d6dd23-24db-438d-b922-8354af6ab305"

namespace DirectUI
{
    class AppBarLightDismissAutomationPeer;

    class __declspec(novtable) AppBarLightDismissAutomationPeerGenerated:
        public DirectUI::FrameworkElementAutomationPeer
        , public ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider
    {
        friend class DirectUI::AppBarLightDismissAutomationPeer;


        BEGIN_INTERFACE_MAP(AppBarLightDismissAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)
            INTERFACE_ENTRY(AppBarLightDismissAutomationPeerGenerated, ABI::Microsoft::UI::Xaml::Automation::Provider::IInvokeProvider)
        END_INTERFACE_MAP(AppBarLightDismissAutomationPeerGenerated, DirectUI::FrameworkElementAutomationPeer)

    public:
        AppBarLightDismissAutomationPeerGenerated();
        ~AppBarLightDismissAutomationPeerGenerated() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::AppBarLightDismissAutomationPeer;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::AppBarLightDismissAutomationPeer;
        }

        // Properties.

        // Events.

        // Methods.
        IFACEMETHOD(Invoke)() override;


    protected:
        HRESULT QueryInterfaceImpl(_In_ REFIID iid, _Outptr_ void** ppObject) override;

    private:

        // Fields.
    };
}

#include "AppBarLightDismissAutomationPeer_Partial.h"
