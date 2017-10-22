The project is a very simple pong game written in C++. The "ball" (which is actually a square) bounces inside of the window back and forth not going off screen. The two paddles have hit detection where if they hit the "ball" the ball bounces off of it. We use Visual Studios Express for Desktop 2105 and SFML to create the game. The SFML downloaded and used was SFML 2.4.2 Visuall C++ 14(2015) - 32-bit for Windows. In order for the project to work you need to download both of these items (The VS Express for Desktop 2017 might also be okay but it is not tested). Make sure to save the extracted SFML files in the same location as where you have the VS Express. Once that is done open up VS Express and start a new C++ Win32 Console Application (Note where the save location for the project is you will need that). 
Once the file is set up go to Project -> "Project Name" Properties -> Click the scroll down for C/C++ -> there put the path for the include that is inside of the SFML files
Click Apply (that will save it) then click the scroll down for Linker -> inside of the Additional Library Directories put the path for lib that is inside of the SFML files -> click apply once again
Then under Linker -> Input -> where it says Additional Dependencies **Make sure you do not delete anything that is already inside of this** put the five following items inside 
sfml-system-d.lib
sfml-graphics-d.lib
sfml-audio-d.lib
sfml-network-d.lib
sfml-system-d.lib 
inside of the Additional Dependencies separated by ; (semicolons). Click Apply.
Then in the top left where it says Configuration set that to Debug (it was originally set to Debug (Active)).
Once that is set click ok to save everything. Next you will go to the SFML file and go into the bin directory. Inside of the bin you need to copy all of the files that are inside of bin and put the copies inside of the "Project Name" in the same location where the C++ file for the project is. 

Special Thanks to the CS Club at CSU Stanislaus and Simple Game Development in C++ for the setup guide. 