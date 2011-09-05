#ifndef _WIRING_DIGITAL_
#define _WIRING_DIGITAL_

#ifdef __cplusplus
 extern "C" {
#endif

/*
 * \brief Configures the specified pin to behave either as an input or an output. See the description of digital pins for details.
 *
 * \param dwPin the number of the pin whose mode you wish to set
 * \param dwMode either INPUT or OUTPUT
 */
extern void pinMode( uint32_t dwPin, uint32_t dwMode ) ;

/*
 * \brief Write a HIGH or a LOW value to a digital pin.
 *
 * \desc If the pin has been configured as an OUTPUT with pinMode(), its voltage will be set to the
 * corresponding value: 5V (or 3.3V on 3.3V boards) for HIGH, 0V (ground) for LOW.
 *
 * If the pin is configured as an INPUT, writing a HIGH value with digitalWrite() will enable an internal
 * 20K pullup resistor (see the tutorial on digital pins). Writing LOW will disable the pullup. The pullup
 * resistor is enough to light an LED dimly, so if LEDs appear to work, but very dimly, this is a likely
 * cause. The remedy is to set the pin to an output with the pinMode() function.
 *
 * \note Digital pin PIN_LED is harder to use as a digital input than the other digital pins because it has an LED
 * and resistor attached to it that's soldered to the board on most boards. If you enable its internal 20k pull-up
 * resistor, it will hang at around 1.7 V instead of the expected 5V because the onboard LED and series resistor
 * pull the voltage level down, meaning it always returns LOW. If you must use pin PIN_LED as a digital input, use an
 * external pull down resistor.
 *
 * \param dwPin the pin number
 * \param dwVal HIGH or LOW
 */
extern void digitalWrite( uint32_t dwPin, uint32_t dwVal ) ;

/*
 * \brief Reads the value from a specified digital pin, either HIGH or LOW.
 *
 * \param dwPin the number of the digital pin you want to read (int)
 */
extern int digitalRead( uint32_t dwPin ) ;

#ifdef __cplusplus
}
#endif

#endif /* _WIRING_DIGITAL_ */
