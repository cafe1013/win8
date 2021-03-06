﻿//
//BlankPage.xaml.cpp
//BlankPage.xaml クラスの実装。
//

#include "pch.h"
#include "BlankPage.xaml.h"

using namespace DynamicLoadImageCppCx;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

BlankPage::BlankPage()
{
	InitializeComponent();
}

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void BlankPage::OnNavigatedTo(NavigationEventArgs^ e)
{
}


void DynamicLoadImageCppCx::BlankPage::Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	String^ fname = (String^)((Button^)sender)->Content;
	fname = "ms-appx:///Images/" + fname + ".png" ;
	Imaging::BitmapImage^ bi = ref new Imaging::BitmapImage( ref new Uri( fname ));
	this->image1->Source = bi ;
}
