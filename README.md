ofxSuperColliderBoot
====================

Start Supercollider in a Openframeworks app without run any editor (scel, sced or emacs) to boot the server. Just run the script and sclang will start and after your app. The script is a starting point, customize it to your owns. Tested in linux64 with OF 008

instructions
============
in testApp.h

add the ofxSCexit header

>#include "ofxSCexit.h"

and the object

>ofxSCexit sc;

in testApp.cpp

Add in testApp::exit() 

>sc.SCexit();


Addons needed
-------------

OfxSuperCollider, ofxOsc


