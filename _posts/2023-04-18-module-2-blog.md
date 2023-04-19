
# Module 2 - Installation blog post 2


  For this project, I made a heart shape enclosure. I used my esp32 and a joystick to create a controller. I used a 3-d printer to create my enclosure. There were many errors as it was my first time using a 3-d printer. I wanted to create a heart visualization where the joystick could control a heartbeat animation that would appear on my computer screen. When the joystick is connected to the esp32, It can read the analog values from the X and Y axes and send them to the computer over serial communication. I mapped the X and Y values to a range that represented the heartbeat rate and used these mapped values to control the speed and size of the heartbeat animation changes. Then, I used the Python script to read the values from the serial port and Pygame to create the animation. 

  What inspired me to create this project was that I am a senior and have to continue to make major life-changing decisions for myself. Unfortunately, there can be a lot of outside noise and pressure from my family that sways my choices for the future. But ultimately, I will have to be the one who lives my life, so I need to make heart-centered decisions. So I created this heart visualization to conceptualize this philosophy. When the heart animation beats faster, this is something that you are passionate about; when the heart is beating slower, this is not something that excites you or brings joy. 
  
  I used Tinkercad to design and model the enclosure. Here is the first design I tried. After I was satisfied with the design, I sent the file to Cura, a computer program that slices the model for the 3-d printer to read the measurements of the layers for the 3-d model. Next I imported that file to an sd card. Then, in the 3d printer machine, I choose the right color for the enclosure and feed the sd card into the machine. The first model took 8 hours to complete and was a failure. 
  
  There were a lot of technical difficulties in creating this project. My most challenging was correctly reading the analog inputs from the joystick and having this change the size and image on the screen. The lab we did in class helped and viewing the serial monitor to see the actual values displayed. It came with much trial and error to figure out what worked. 
  
  <img width="628" alt="Screenshot 2023-04-19 at 1 47 17 PM" src="https://user-images.githubusercontent.com/46787224/233158182-a2d0e122-8f10-408e-836a-33dcc866273b.png">



![IMG_1440](https://user-images.githubusercontent.com/46787224/233156802-ee9ba4bb-0dfd-4a31-9696-d1092eeeabf0.jpg)


I used a different design for the second attempt, which took another 8 hours to finish printing. I repeated the process outlined above. It was a better model, and the box fit my joystick and esp32, but the lid did not work correctly. The hinges on the top were far too large, and they did not close. The second attempt on the cover was a failure since the hinges did not even print. On the third attempt, I got the correct dimensions, and the hinges and the lid fit the box. Below are pictures of the model and the process of correctly providing the cover to the chest. 


<img width="625" alt="Screenshot 2023-04-19 at 1 47 25 PM" src="https://user-images.githubusercontent.com/46787224/233158116-f1612cf4-6f4d-469b-b50e-4c5a13f528dd.png">


![IMG_1472](https://user-images.githubusercontent.com/46787224/233156886-7b9656f2-6a18-4472-8924-c63bc55b5e22.jpg)


![IMG_1488](https://user-images.githubusercontent.com/46787224/233156866-d0947cb8-5f15-4e35-897a-bf74858cb6c5.jpg)


![IMG_1491](https://user-images.githubusercontent.com/46787224/233156912-c0a0ddf0-ca1b-43c4-b12d-ab36985f70d8.jpg)


![IMG_1496](https://user-images.githubusercontent.com/46787224/233156929-bcf779c0-8b27-4845-abf2-2e0f7d35e009.jpg)


Here is the video demonstration of my project:
https://youtu.be/ClQC65wCm74
Here is the final product of my enclosure:
![IMG_9392](https://user-images.githubusercontent.com/46787224/233156580-1ce2c655-771d-4136-ac31-59a0f8bcebd5.JPG)


![IMG_9382](https://user-images.githubusercontent.com/46787224/233156502-8edb0e4d-3c1d-4477-bfba-06541a9d258d.JPG)

