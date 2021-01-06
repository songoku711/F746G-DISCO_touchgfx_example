#include <gui/screen1_screen/screen1View.hpp>

#include <stdint.h>

extern "C"
{
  extern uint8_t hwUserLedState;
}

screen1View::screen1View()
{

}

void screen1View::setupScreen()
{
  screen1ViewBase::setupScreen();

  if (hwUserLedState != (uint8_t)0U)
  {
    imageLedOn.setVisible(true);
    imageLedOff.setVisible(false);
  }
  else
  {
    imageLedOn.setVisible(false);
    imageLedOff.setVisible(true);
  }

  imageLedOn.invalidate();
  imageLedOff.invalidate();
}

void screen1View::tearDownScreen()
{
  screen1ViewBase::tearDownScreen();
}

void screen1View::toggleGreenLed()
{
  if (imageLedOn.isVisible())
  {
	imageLedOn.setVisible(false);
	imageLedOff.setVisible(true);
  }
  else
  {
	imageLedOn.setVisible(true);
	imageLedOff.setVisible(false);
  }

  imageLedOn.invalidate();
  imageLedOff.invalidate();
}
