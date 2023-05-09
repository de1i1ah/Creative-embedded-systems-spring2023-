# Technical document to supplement Hopscotch Final Project

For the last project we created a generative code installation using an Esp-32, LED lights, and buttons. For our Final project, we created a finger-sized hopscotch that lights up as you hop on each tile. 
. 
Here is the project:

![IMG_2040](https://user-images.githubusercontent.com/46787224/236961301-47af02d8-1d51-4ca2-92d4-4052dc2211cf.jpg)

![IMG_2030](https://user-images.githubusercontent.com/46787224/236961364-a53a8fc3-e6fe-42b8-ad08-cce17f838d47.jpg)


The hardware and software material needed to repulicate:
- esp32
- Ardunio 1.8 ide
- Buttons
- usb-c cable
- Female to male wires
- male to male wires
- Breadboard
- Plywood 
- Tools: laser cutter, saw, orbital sander, etc
- Hinges

The ardunio code that was used can be found and dowloaded from this repo:
https://github.com/de1i1ah/Creative-embedded-systems-spring2023-/

<img width="681" alt="Screenshot 2023-05-08 at 6 37 26 PM" src="https://user-images.githubusercontent.com/46787224/236961231-c375114b-c2bc-40a8-a8b7-a59fd4caa89d.png">

First, you need to use the two male-to-male wires to connect to each of the seven buttons. The wires need to be connected to pins diagonal from each other. You can then use the schematic diagram above to connect the buttons to the available pins on your esp-32. Note we did not, and you do not have to use resistors. Then connect your LED lights to power and ground on your breadboard again. Follow the schematic for specific details. You can download the code from our repo and test it to see if your Christmas lights work. When pressed, each button should light up the corresponding LED light next to it, and when all the buttons are pressed, you will be a celebrating display of lights. For the enclosure, buying a box already made and drilling holes for the LED lights and buttons would be easiest.
