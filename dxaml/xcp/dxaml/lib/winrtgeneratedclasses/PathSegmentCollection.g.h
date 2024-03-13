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


#define __PathSegmentCollection_GUID "452e14fe-10a1-40a4-b471-ea0ba769677d"

namespace DirectUI
{
    class PathSegmentCollection;

    class __declspec(novtable) __declspec(uuid(__PathSegmentCollection_GUID)) PathSegmentCollection:
        public DirectUI::PresentationFrameworkCollection<ABI::Microsoft::UI::Xaml::Media::PathSegment*>
    {

        INSPECTABLE_CLASS(L"Microsoft.UI.Xaml.Media.PathSegmentCollection");


    public:
        PathSegmentCollection();
        ~PathSegmentCollection() override;

        // Event source typedefs.

        KnownTypeIndex GetTypeIndex() const override
        {
            return KnownTypeIndex::PathSegmentCollection;
        }

        static XCP_FORCEINLINE KnownTypeIndex GetTypeIndexStatic()
        {
            return KnownTypeIndex::PathSegmentCollection;
        }

        // Properties.

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

