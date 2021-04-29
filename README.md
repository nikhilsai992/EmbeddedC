# Embedded C Programming  with Continuous Integration and Code Quality

## Activity1



### Passenger seated and turned on the heater
![LED ON](https://github.com/nikhilsai992/EmbeddedC/blob/0e56bf5605cec12f74b6b89ea55c68632b69d08a/simulation/Activtiy1.PNG)

## Activity2
### Adjusting the temperature using temperature sensor
![ADC CONVERSION](https://github.com/nikhilsai992/EmbeddedC/blob/0e56bf5605cec12f74b6b89ea55c68632b69d08a/simulation/Activity2.PNG)

### Activity3
### Displaying the temperature as PWM waveform

|ADC value(Temperature sensor)|Output PWM (duty cycle)|
| 0 -200 | 20% - 20°C|
| 210 -2500 | 40% - 25°C|
| 510 -700 | 70% - 29°C|
| 710 -1024 | 95% - 33°C|

![PWM Waveform](https://github.com/nikhilsai992/EmbeddedC/blob/0e56bf5605cec12f74b6b89ea55c68632b69d08a/simulation/Activity3.PNG)


#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/nikhilsai992/EmbeddedC/actions/workflows/compile.yml/badge.svg)](https://github.com/nikhilsai992/EmbeddedC/actions/workflows/compile.yml)|[![Cppcheck](https://github.com/nikhilsai992/EmbeddedC/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/nikhilsai992/EmbeddedC/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/0bf5e0df2e3c40e2a0e7ba740b452f26)](https://www.codacy.com/gh/nikhilsai992/EmbeddedC/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=nikhilsai992/EmbeddedC&amp;utm_campaign=Badge_Grade)|
