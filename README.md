# Embedded C Programming  with Continuous Integration and Code Quality

## Activity1



### Passenger seated and turned on the heater
![LED On](https://github.com/nikhilsai992/EmbeddedC/blob/0e56bf5605cec12f74b6b89ea55c68632b69d08a/simulation/Activtiy1.PNG)

## Activity2
### Adjusting the temperature using temperature sensor
![ADC Conversion](https://github.com/nikhilsai992/EmbeddedC/blob/0e56bf5605cec12f74b6b89ea55c68632b69d08a/simulation/Activity2.PNG)

## Activity3
### Displaying the temperature as PWM waveform


|ADC value(Temperature sensor)|Output PWM (duty cycle)|
|:--:|:--:|
| 0 -200 | 20% - 20°C|
| 210 -500 | 40% - 25°C|
| 510 -700 | 70% - 29°C|
| 710 -1024 | 95% - 33°C|

![PWM Waveform](https://github.com/nikhilsai992/EmbeddedC/blob/0e56bf5605cec12f74b6b89ea55c68632b69d08a/simulation/Activity3.PNG)

## Activity4
### Displaying the temperature on serial monitor using USART 
![Serial Monitor Values](https://github.com/nikhilsai992/EmbeddedC/blob/06ee403f7e66d687d225c8e6f7d7438a888cf33b/simulation/Activity4.PNG)


#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/ec34bca20b7f4c12995f8e129dd77453)](https://app.codacy.com/gh/nikhilsai992/EmbeddedC?utm_source=github.com&utm_medium=referral&utm_content=nikhilsai992/EmbeddedC&utm_campaign=Badge_Grade_Settings)
|[![Compile-Linux](https://github.com/nikhilsai992/EmbeddedC/actions/workflows/compile.yml/badge.svg)](https://github.com/nikhilsai992/EmbeddedC/actions/workflows/compile.yml)|[![Cppcheck](https://github.com/nikhilsai992/EmbeddedC/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/nikhilsai992/EmbeddedC/actions/workflows/CodeQuality.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/0bf5e0df2e3c40e2a0e7ba740b452f26)](https://www.codacy.com/gh/nikhilsai992/EmbeddedC/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=nikhilsai992/EmbeddedC&amp;utm_campaign=Badge_Grade)|
