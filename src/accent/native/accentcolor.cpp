#include "accentcolor.hpp"

#include <winrt/Windows.UI.ViewManagement.h>

using namespace winrt;
using namespace Windows::UI::ViewManagement;

::Array<uint8_t> accentcolor::getAccentColor()
{
    UISettings const ui_settings {};
    auto const accent_color { ui_settings.GetColorValue(UIColorType::Accent) };

    ::Array<uint8_t> returnArray = Array_obj<uint8_t>::__new();;
    returnArray[0] = accent_color.R;
    returnArray[1] = accent_color.G;
    returnArray[2] = accent_color.B;

    return returnArray;
}