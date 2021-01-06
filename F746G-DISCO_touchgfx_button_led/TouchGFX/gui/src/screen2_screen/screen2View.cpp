#include <gui/screen2_screen/screen2View.hpp>

#include <stdint.h>

extern "C"
{
  extern uint8_t hwUserLedState;
}

screen2View::screen2View()
{

}

void screen2View::setupScreen()
{
  screen2ViewBase::setupScreen();

  if (hwUserLedState != (uint8_t)0U)
  {
	imageBulbOn.setVisible(true);
	imageBulbOff.setVisible(false);
  }
  else
  {
    imageBulbOn.setVisible(false);
    imageBulbOff.setVisible(true);
  }

  imageBulbOn.invalidate();
  imageBulbOff.invalidate();
}

void screen2View::tearDownScreen()
{
  screen2ViewBase::tearDownScreen();
}

void screen2View::toggleBulb()
{
  if (imageBulbOn.isVisible())
  {
	imageBulbOn.setVisible(false);
	imageBulbOff.setVisible(true);
  }
  else
  {
	imageBulbOn.setVisible(true);
	imageBulbOff.setVisible(false);
  }

  imageBulbOn.invalidate();
  imageBulbOff.invalidate();
}

void screen2View::buttonPowerClickHandler()
{
  if (imageBulbOn.isVisible())
  {
    imageBulbOn.setVisible(false);
    imageBulbOff.setVisible(true);
  }
  else
  {
    imageBulbOn.setVisible(true);
    imageBulbOff.setVisible(false);
  }

  imageBulbOn.invalidate();
  imageBulbOff.invalidate();

  presenter->buttonPowerClickHandler();
}
