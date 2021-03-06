/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

screen1ViewBase::screen1ViewBase() :
    buttonCallback(this, &screen1ViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    background.setPosition(0, 0, 480, 272);
    background.setColor(touchgfx::Color::getColorFrom24BitRGB(3, 35, 75));

    buttonToScreen2.setXY(155, 190);
    buttonToScreen2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonToScreen2.setLabelText(touchgfx::TypedText(T_SINGLEUSEID1));
    buttonToScreen2.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonToScreen2.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonToScreen2.setAction(buttonCallback);

    imageLedOff.setXY(190, 42);
    imageLedOff.setBitmap(touchgfx::Bitmap(BITMAP_LED_GREEN_OFF_ID));

    imageLedOn.setXY(190, 42);
    imageLedOn.setVisible(false);
    imageLedOn.setBitmap(touchgfx::Bitmap(BITMAP_LED_GREEN_ON_ID));

    add(__background);
    add(background);
    add(buttonToScreen2);
    add(imageLedOff);
    add(imageLedOn);
}

void screen1ViewBase::setupScreen()
{

}

void screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonToScreen2)
    {
        //InteractionButtonToScreen2
        //When buttonToScreen2 clicked change screen to screen2
        //Go to screen2 with no screen transition
        application().gotoscreen2ScreenNoTransition();
    }
}
