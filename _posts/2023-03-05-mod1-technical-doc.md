# Technical document to supplement Module 1

For this module we created a generative code installation using an Esp-32. The main purpose of this project was to use our creative abilities and techincal skills to express a poem or any text that we felt was important to us. 

The hardware and software material needed to repulicate:
- esp32
- Ardunio 1.8 ide
- driver : http://www.wch.cn/downloads/CH34XSER_MAC_ZIP.html
- usb-c cable
- download TFT_eSPI library to use TTGO-1 board


Steps to be able to create this project: 
- first you need to download the ardunio 1.8 ide and driver 
- Second you need go to tool > board manger > and install the TFT_eSPI library then go to preferences and select this code https://dl.espressif.com/dl/package_esp32_index.json into the "additional board manager urls"
- third attach your esp32 to your computer by using the usb-c cable to connect the two
- fourth you can now select the board your using go to Tools > Board > espi32 > TTGO-1 and select the port as well Tools > port > dev/ci.usbcserial...
- Fifth you also want to change your settings located in your folder. Go to Ardunio under documents then libraries > TFT_eSPI > User_Setup_Select.h comment out the default setting and uncomment the setup file for ESP32 and TTGO T_DISPLAY
- Fifth if you choose you can load an example project to get you famailiar. To do this go to File > Examples > TFT_eSPI > 160 X 128 and choose which example you like
- lastly you can now use your creative and technical freedom to create whatever generative code project you would like!

This is a picture of my poem I quoted from James Baldwin that was displayed in the installation: 
![esp32peom](https://user-images.githubusercontent.com/46787224/222984417-59f047c4-a141-44ca-9f88-e2734264da51.jpg)

Here is the generative art that was spontansly displayed as well:
![esp32circles](https://user-images.githubusercontent.com/46787224/222986671-b8d680ec-a821-426c-b53c-bfd87455c7be.jpg)

This is also a picture of the installation as a colletive of the other esp32's that were being displayed: 
![esp32collection](https://user-images.githubusercontent.com/46787224/222986716-fc70a500-dde4-43d9-8142-fb6b9bb00efa.jpg)
