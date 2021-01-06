#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include <stdint.h>

extern "C"
{
  extern uint8_t hwUserButtonPressed;
  extern void HAL_ToggleHwUserLed(void);
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
#ifndef SIMULATOR
  if (hwUserButtonPressed != (uint8_t)0U)
  {
	modelListener->hwUserButtonPressHandler();

	hwUserButtonPressed = (uint8_t)0U;
  }
#endif
}

void Model::toggleHwUserLed()
{
	HAL_ToggleHwUserLed();
}
