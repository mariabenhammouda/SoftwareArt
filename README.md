# SoftwareArt
 Random lines code
First i have created a slidergroup that is type gui then setup all the required variables under the slidergroupincluding 3 variables. The first is of type int to control the thickeness of the line, the second is of float type to control the opacitiy of the lines, and the last is vector to control the RGB values. In the draw function, i have created a loop to draw 50 random lines. The function ofRandom is responsible for randomizing the x and y coordinates but within a specified range of 1/3 of the top left and bottom right of the screesize. By using the Getwidth and Getheigh functions the lines' length adjusts automaically to the size do the window. I intiailized the screen colour and the lines colour to be complementary. I have also slowed the framerate to reduce the overwhelming line changes.
 
 Requires Ofxgui addon
 

Maximum line thickness low opacity blue
![Screen Shot 2022-04-05 at 1 50 31 PM](https://user-images.githubusercontent.com/102983688/161728190-cb29bcc0-4e63-4b4d-bda5-fc43880eb8fa.png)
Maximum line thickness low opacity maroon
![Screen Shot 2022-04-04 at 7 42 39 PM](https://user-images.githubusercontent.com/102983688/161727037-dd5cd925-fd5b-4d33-9eaf-141564222d39.png)

