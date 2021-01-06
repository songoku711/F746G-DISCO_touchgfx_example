#include <gui/screen2_screen/screen2View.hpp>
#include <gui/screen2_screen/screen2Presenter.hpp>

screen2Presenter::screen2Presenter(screen2View& v)
    : view(v)
{

}

void screen2Presenter::activate()
{

}

void screen2Presenter::deactivate()
{

}

void screen2Presenter::hwUserButtonPressHandler()
{
  view.toggleBulb();
}

void screen2Presenter::buttonPowerClickHandler()
{
  model->toggleHwUserLed();
}
