#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
        ofSetLogLevel(OF_LOG_VERBOSE);

///create an osc message (/boot) to send to the Server to boot the Server
        msg.setAddress("/boot");
        server = new ofxSCServer("localhost", 57110);
        server->sendMsg(msg);

///we create a simple sine synth

        int num =1;
        float notes[] = {1.0, 5.0/4.0, 4.0/3.0, 3.0/2.0};
        float base[] = {1.0, 2.0, 4.0, 6.0, 8.0, 16.0};
        float radius;
        float soundSpeed;
        float lfo;
        float phase;
        float movedDim;
        soundSpeed = notes[num%4] * base[num%6] * pow(1.5, 1.0+int(num/16.0));
        synth = new ofxSCSynth("sine");
        synth->set("freq", soundSpeed * 50);
        synth->set("lfoFreq", lfo);
        synth->set("amp", 0);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
     ofSetHexColor(0x3399ff);
    if (ofGetMousePressed()) {
        ofCircle(mouseX, mouseY, 40);
    }

}
//--------------------------------------------------------------
void testApp::exit(){
    // Free synth
    synth->free();
}
//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
     // map params by mouseX, mouseY

    int mod, index;
    mod = ofMap(x, 0, ofGetWidth(), 20, 8000); //mod: 20Hz - 8000Hz
    index = ofMap(y, 0, ofGetHeight(), 1000, 0); //index: 1000 - 0
    synth->set("mod", mod);
    synth->set("index", index);

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    // Play Synth
    synth->create();

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
  // Free Synth
    synth->free();
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}
