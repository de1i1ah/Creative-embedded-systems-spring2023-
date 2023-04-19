# Technical document to supplement Module 2

For this module we created a generative code installation using an Esp-32 and joystick. For my project I created a heart shaped controller where you can use the joystick to control the heart animation on the screen of the computer. 
Here is the controller:

<img width="1217" alt="Screenshot 2023-04-19 at 2 20 34 PM" src="https://user-images.githubusercontent.com/46787224/233165335-8d66e031-6e1c-4b52-bc66-64c4c10135ed.png">

<img width="1004" alt="Screenshot 2023-04-19 at 2 24 49 PM" src="https://user-images.githubusercontent.com/46787224/233166283-ed553018-1648-4baa-afa9-b1ba91e99ac8.png">

The hardware and software material needed to repulicate:
- esp32
- Ardunio 1.8 ide
- Joystick
- usb-c cable
- Female to Female wires
- Python3 and Pygame installed 

First you need to use the female to female wires to connect the joystick and arduino hardware together. You can follow the schematic diagram below to know how to connect the pins together. 


<img width="794" alt="Screenshot 2023-04-19 at 2 00 12 PM" src="https://user-images.githubusercontent.com/46787224/233164284-5ce1b9ab-6121-4515-834e-ad665cef18c2.png">

Here are the steps you can follow replicate this project and run the Arduino and Python scripts together to display the heart visualization:
- Connect your ESP32 to your computer via USB cable.
- Clone the github repo that includes the python script and Arduino code
- Open the Arduino IDE and flash the Arduino code to your ESP32.
- Open a terminal or command prompt on your computer and navigate to the directory where the Python script is located.
- Before running the python script make sure you have the Pygame library installed.
- In the terminal, run the Python script by typing python3 heartbeat.py and pressing Enter. This will start the Python script and begin reading data from the ESP32.
- The heart visualization should appear on the screen, and should update in real-time as you move the joystick connected to your ESP32.
- To stop the Python script, press Ctrl+C in the terminal or command prompt.
- To exit the Arduino code, unplug the ESP32 from your computer.


