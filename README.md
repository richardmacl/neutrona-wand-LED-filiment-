# neutrona-wand-LED-filiment-

This my project to place LED filiments in the clear acrylic tube of the nutrona wand to simulate the particle streams.

This is a arduino controlled project that piggybacks on the MikeS11 electronics.
The electronics are triggered when the buttons used to activate the animations in the MikeS11 code are pulled to ground.
The connections are tied with the eletronics for MikeS11 with a couple diodes to prevent false signals.
The LEDS are activated by transistors as they will pull more current than a arduino will allow.
The code is just random flashing. Im not good at code, would have rather had longer on times and ones on at the same time as others with varrying lengh of time.

For this project you will need the following:
1- arduino nano
5- transistors, i used BC337-25-TA. (probably not the best but what i had on hand)
2- coustom circut boards, one for the arduino, transistors and diodes, and one for the LED filaments with resistors for the positive end of the filaments to join to.
5- 130mm Led filaments of assorted colours
5- 1206 SMD resistors of the value corosponding to the colour of filament.
