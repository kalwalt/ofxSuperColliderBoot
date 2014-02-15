ofxSuperColliderBoot
====================

Start Supercollider https://github.com/supercollider/supercollider in a Openframeworks app without run any editor (scel, sced or emacs) to boot the server. Just run the script and sclang will start and after your app. The script is a starting point, customize it to your owns. The Server scsynth is quitted by the ofxSCexit object in exit(). Tested in linux64 with OF 008

Instructions
============
in testApp.h

add the ofxSCexit header

>  #include "ofxSCexit.h"

and the object

>ofxSCexit sc;

in testApp.cpp

Add in testApp::exit() 

>sc.SCexit();


Addons needed
-------------

ofxSuperCollider, ofxOsc

ofxSuperCollider addon in google code (but no updates from 2010):

>svn checkout 
http://ofxsupercollider.googlecode.com/svn/trunk/ofxSuperCollider


