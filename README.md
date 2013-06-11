#DESOLATOR
DEcentralized SOLutions And Tactics Of RTS

##Description
A track project given in June 2013 for the MSc Artificial Intelligence of the University of Amsterdam.
In this project we try to extend the approach of C. Jackson and K. Bogert.
They implemented an application of a Dec-POMDP in a real-time strategy game (Starcraft) using Joint Equilibrium-based Search for Policy (JESP) algorithm.
We propose to extend this application by applying the same algorithm for heterogeneous teams.

##Setting up the environment
###Step 1: Install Starcraft
1. Download starcraft.zip
2. Unpack starcraft.zip
3. Delete folders bwapi-data and Chaoslauncher (they are outdated).
4. Add registry key 'InstallPath' containing the path of the Starcraft folder, which can be done at: ‘HKEY_CURRENT_USER -> Software -> Blizzard Entertainment -> Starcraft’

###Step 2: Install Microsoft Visual Studio 2008
1. Download and install Microsoft Visual Studio 2008 Express:
https://www.dreamspark.com/Product/Product.aspx?productid=34

###Step 3: Install Chaoslauncher
1. Download and install Chaoslauncher: http://wiki.teamliquid.net/starcraft/Chaoslauncher

###Step 4: Install BWAPI 2.6.1
1. Download and unzip the BWAPI 2.6.1: https://code.google.com/p/bwapi/downloads/detail?name=BWAPI_Beta_2.6.1.zip&can=1&q=
2. Follow ReadMe instruction of the BWAPI 2.6.1 (you don't need to compile the example

###Step 5: Install MBDP-MADP
1. Clone the repository using Mecurial: https://code.google.com/p/mbdp-madp/source/checkout
2. Open the MADP_dll solution, which is in the folder MADP_dll
3. Open the file MBDPAIModule.cpp in the MBDPAIBot2 project.
4. Fix the reference of this line:
-> args.dpf = "C:/Users/robolab/Documents/DESOLATOR/mbdp-madp/problems/starcraft-dragoons.dpomdp";
needs to reflect the actual position of that file in your filesystem (is in mbdp-madp/problems/starcraft-dragoons.dpomdp)
5. Compile the whole solution, one project fails but that does not matter.
6. Copy the .dll of the bots into Starcraft/bwapi-data/AI
7. Change the config.ini in the bwapi-data to the correct name of the module.
8. Move the maps from mbdp-madp/problems/maps into Starcraft/maps
9. Run Chaoslauncher and inject the module.