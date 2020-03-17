// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "UniformGridLayout.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(UniformGridLayout)
}

#include "UniformGridLayout.g.cpp"

GlobalDependencyProperty UniformGridLayoutProperties::s_ItemsJustificationProperty{ nullptr };
GlobalDependencyProperty UniformGridLayoutProperties::s_ItemsStretchProperty{ nullptr };
GlobalDependencyProperty UniformGridLayoutProperties::s_MaximumRowsOrColumnsProperty{ nullptr };
GlobalDependencyProperty UniformGridLayoutProperties::s_MinColumnSpacingProperty{ nullptr };
GlobalDependencyProperty UniformGridLayoutProperties::s_MinItemHeightProperty{ nullptr };
GlobalDependencyProperty UniformGridLayoutProperties::s_MinItemWidthProperty{ nullptr };
GlobalDependencyProperty UniformGridLayoutProperties::s_MinRowSpacingProperty{ nullptr };
GlobalDependencyProperty UniformGridLayoutProperties::s_OrientationProperty{ nullptr };

UniformGridLayoutProperties::UniformGridLayoutProperties()
{
    EnsureProperties();
}

void UniformGridLayoutProperties::EnsureProperties()
{
    if (!s_ItemsJustificationProperty)
    {
        s_ItemsJustificationProperty =
            InitializeDependencyProperty(
                L"ItemsJustification",
                winrt::name_of<winrt::UniformGridLayoutItemsJustification>(),
                winrt::name_of<winrt::UniformGridLayout>(),
                false /* isAttached */,
                ValueHelper<winrt::UniformGridLayoutItemsJustification>::BoxValueIfNecessary(winrt::UniformGridLayoutItemsJustification::Start),
                winrt::PropertyChangedCallback(&OnItemsJustificationPropertyChanged));
    }
    if (!s_ItemsStretchProperty)
    {
        s_ItemsStretchProperty =
            InitializeDependencyProperty(
                L"ItemsStretch",
                winrt::name_of<winrt::UniformGridLayoutItemsStretch>(),
                winrt::name_of<winrt::UniformGridLayout>(),
                false /* isAttached */,
                ValueHelper<winrt::UniformGridLayoutItemsStretch>::BoxValueIfNecessary(winrt::UniformGridLayoutItemsStretch::None),
                winrt::PropertyChangedCallback(&OnItemsStretchPropertyChanged));
    }
    if (!s_MaximumRowsOrColumnsProperty)
    {
        s_MaximumRowsOrColumnsProperty =
            InitializeDependencyProperty(
                L"MaximumRowsOrColumns",
                winrt::name_of<int>(),
                winrt::name_of<winrt::UniformGridLayout>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(-1),
                winrt::PropertyChangedCallback(&OnMaximumRowsOrColumnsPropertyChanged));
    }
    if (!s_MinColumnSpacingProperty)
    {
        s_MinColumnSpacingProperty =
            InitializeDependencyProperty(
                L"MinColumnSpacing",
                winrt::name_of<double>(),
                winrt::name_of<winrt::UniformGridLayout>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(0.0),
                winrt::PropertyChangedCallback(&OnMinColumnSpacingPropertyChanged));
    }
    if (!s_MinItemHeightProperty)
    {
        s_MinItemHeightProperty =
            InitializeDependencyProperty(
                L"MinItemHeight",
                winrt::name_of<double>(),
                winrt::name_of<winrt::UniformGridLayout>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(0.0),
                winrt::PropertyChangedCallback(&OnMinItemHeightPropertyChanged));
    }
    if (!s_MinItemWidthProperty)
    {
        s_MinItemWidthProperty =
            InitializeDependencyProperty(
                L"MinItemWidth",
                winrt::name_of<double>(),
                winrt::name_of<winrt::UniformGridLayout>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(0.0),
                winrt::PropertyChangedCallback(&OnMinItemWidthPropertyChanged));
    }
    if (!s_MinRowSpacingProperty)
    {
        s_MinRowSpacingProperty =
            InitializeDependencyProperty(
                L"MinRowSpacing",
                winrt::name_of<double>(),
                winrt::name_of<winrt::UniformGridLayout>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(0.0),
                winrt::PropertyChangedCallback(&OnMinRowSpacingPropertyChanged));
    }
    if (!s_OrientationProperty)
    {
        s_OrientationProperty =
            InitializeDependencyProperty(
                L"Orientation",
                winrt::name_of<winrt::Orientation>(),
                winrt::name_of<winrt::UniformGridLayout>(),
                false /* isAttached */,
                ValueHelper<winrt::Orientation>::BoxValueIfNecessary(winrt::Orientation::Horizontal),
                winrt::PropertyChangedCallback(&OnOrientationPropertyChanged));
    }
}

void UniformGridLayoutProperties::ClearProperties()
{
    s_ItemsJustificationProperty = nullptr;
    s_ItemsStretchProperty = nullptr;
    s_MaximumRowsOrColumnsProperty = nullptr;
    s_MinColumnSpacingProperty = nullptr;
    s_MinItemHeightProperty = nullptr;
    s_MinItemWidthProperty = nullptr;
    s_MinRowSpacingProperty = nullptr;
    s_OrientationProperty = nullptr;
}

void UniformGridLayoutProperties::OnItemsJustificationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::UniformGridLayout>();
    winrt::get_self<UniformGridLayout>(owner)->OnPropertyChanged(args);
}

void UniformGridLayoutProperties::OnItemsStretchPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::UniformGridLayout>();
    winrt::get_self<UniformGridLayout>(owner)->OnPropertyChanged(args);
}

void UniformGridLayoutProperties::OnMaximumRowsOrColumnsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::UniformGridLayout>();
    winrt::get_self<UniformGridLayout>(owner)->OnPropertyChanged(args);
}

void UniformGridLayoutProperties::OnMinColumnSpacingPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::UniformGridLayout>();
    winrt::get_self<UniformGridLayout>(owner)->OnPropertyChanged(args);
}

void UniformGridLayoutProperties::OnMinItemHeightPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::UniformGridLayout>();
    winrt::get_self<UniformGridLayout>(owner)->OnPropertyChanged(args);
}

void UniformGridLayoutProperties::OnMinItemWidthPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::UniformGridLayout>();
    winrt::get_self<UniformGridLayout>(owner)->OnPropertyChanged(args);
}

void UniformGridLayoutProperties::OnMinRowSpacingPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::UniformGridLayout>();
    winrt::get_self<UniformGridLayout>(owner)->OnPropertyChanged(args);
}

void UniformGridLayoutProperties::OnOrientationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::UniformGridLayout>();
    winrt::get_self<UniformGridLayout>(owner)->OnPropertyChanged(args);
}

void UniformGridLayoutProperties::ItemsJustification(winrt::UniformGridLayoutItemsJustification const& value)
{
    static_cast<UniformGridLayout*>(this)->SetValue(s_ItemsJustificationProperty, ValueHelper<winrt::UniformGridLayoutItemsJustification>::BoxValueIfNecessary(value));
}

winrt::UniformGridLayoutItemsJustification UniformGridLayoutProperties::ItemsJustification()
{
    return ValueHelper<winrt::UniformGridLayoutItemsJustification>::CastOrUnbox(static_cast<UniformGridLayout*>(this)->GetValue(s_ItemsJustificationProperty));
}

void UniformGridLayoutProperties::ItemsStretch(winrt::UniformGridLayoutItemsStretch const& value)
{
    static_cast<UniformGridLayout*>(this)->SetValue(s_ItemsStretchProperty, ValueHelper<winrt::UniformGridLayoutItemsStretch>::BoxValueIfNecessary(value));
}

winrt::UniformGridLayoutItemsStretch UniformGridLayoutProperties::ItemsStretch()
{
    return ValueHelper<winrt::UniformGridLayoutItemsStretch>::CastOrUnbox(static_cast<UniformGridLayout*>(this)->GetValue(s_ItemsStretchProperty));
}

void UniformGridLayoutProperties::MaximumRowsOrColumns(int value)
{
    static_cast<UniformGridLayout*>(this)->SetValue(s_MaximumRowsOrColumnsProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int UniformGridLayoutProperties::MaximumRowsOrColumns()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<UniformGridLayout*>(this)->GetValue(s_MaximumRowsOrColumnsProperty));
}

void UniformGridLayoutProperties::MinColumnSpacing(double value)
{
    static_cast<UniformGridLayout*>(this)->SetValue(s_MinColumnSpacingProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double UniformGridLayoutProperties::MinColumnSpacing()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<UniformGridLayout*>(this)->GetValue(s_MinColumnSpacingProperty));
}

void UniformGridLayoutProperties::MinItemHeight(double value)
{
    static_cast<UniformGridLayout*>(this)->SetValue(s_MinItemHeightProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double UniformGridLayoutProperties::MinItemHeight()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<UniformGridLayout*>(this)->GetValue(s_MinItemHeightProperty));
}

void UniformGridLayoutProperties::MinItemWidth(double value)
{
    static_cast<UniformGridLayout*>(this)->SetValue(s_MinItemWidthProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double UniformGridLayoutProperties::MinItemWidth()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<UniformGridLayout*>(this)->GetValue(s_MinItemWidthProperty));
}

void UniformGridLayoutProperties::MinRowSpacing(double value)
{
    static_cast<UniformGridLayout*>(this)->SetValue(s_MinRowSpacingProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double UniformGridLayoutProperties::MinRowSpacing()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<UniformGridLayout*>(this)->GetValue(s_MinRowSpacingProperty));
}

void UniformGridLayoutProperties::Orientation(winrt::Orientation const& value)
{
    static_cast<UniformGridLayout*>(this)->SetValue(s_OrientationProperty, ValueHelper<winrt::Orientation>::BoxValueIfNecessary(value));
}

winrt::Orientation UniformGridLayoutProperties::Orientation()
{
    return ValueHelper<winrt::Orientation>::CastOrUnbox(static_cast<UniformGridLayout*>(this)->GetValue(s_OrientationProperty));
}