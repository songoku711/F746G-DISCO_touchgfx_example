/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.16.0 distribution.
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/**
 * @file touchgfx/UIEventListener.hpp
 *
 * Declares the touchgfx::ClickEvent, touchgfx::DragEvent, touchgfx::GestureEvent and
 * touchgfx::UIEventListener classes.
 */
#ifndef UIEVENTLISTENER_HPP
#define UIEVENTLISTENER_HPP

#include <touchgfx/hal/Types.hpp>

namespace touchgfx
{
class ClickEvent;
class DragEvent;
class GestureEvent;

/**
 * This class declares a handler interface for user interface events, i.e. events generated by
 * the users interaction with the device. With the exception of the system timer tick,
 * all other system events, which are not related to the user interface device
 * peripherals (display, keys etc.) are not part of this interface.
 */
class UIEventListener
{
public:
    /**
     * This handler is invoked when a mouse click or display touch event has been detected
     * by the system.
     *
     * @param  event The event data.
     */
    virtual void handleClickEvent(const ClickEvent& event)
    {
    }

    /**
     * This handler is invoked when a drag event has been detected by the system.
     *
     * @param  event The event data.
     */
    virtual void handleDragEvent(const DragEvent& event)
    {
    }

    /**
     * This handler is invoked when a gesture event has been detected by the system.
     *
     * @param  event The event data.
     */
    virtual void handleGestureEvent(const GestureEvent& event)
    {
    }

    /**
     * This handler is invoked when a key (or button) event has been detected by the system.
     *
     * @param  c The key or button pressed.
     */
    virtual void handleKeyEvent(uint8_t c)
    {
    }

    /**
     * This handler is invoked when a system tick event has been generated. The system tick
     * period is configured in the HAL.
     */
    virtual void handleTickEvent()
    {
    }

    /** This handler is invoked when a change screen event is pending. */
    virtual void handlePendingScreenTransition()
    {
    }

    /** Finalizes an instance of the UIEventListener class. */
    virtual ~UIEventListener()
    {
    }
};

} // namespace touchgfx

#endif // UIEVENTLISTENER_HPP
