This is a simple project with simple arduino code for controlling DC motor.

For this project you need: 1x Arduino
			   1x Breadboard
			   1x DC motor (i am using a 5V DC motor from laptop cooler)
			   1x BC547 transistor
			   1x 1N4148 diode
			   2x Button

Project is made with interrupts, that is why variable motorSpeed is type volatile.
When program starts the DC motor speed is set to 0. By pressing the Button which is connected
to pin 2 the DC motor accelerates by 15. You can accelerate all the way to 255 which is the maximum
value for motor speed. By pressing BTN which is connected to pin 3 you deccelerate by 15.
There are 2 lines of code that prevent motor to go below the value of 0, and more than 255.
By opening Serial monitor, while arduino is connected to pc, you can observe how speed is changing
by pressing the buttons.

Arduino that I am using at the moment has only 2 interrupt pins so I couldn't do the ON/OFF button.