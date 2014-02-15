#include "ofxSCexit.h"

void ofxSCexit::SCexit(){

        ofxSCServer *server;
		ofxOscMessage msg;

        msg.setAddress("/quit");
        server = new ofxSCServer("localhost", 57110);
        server->sendMsg(msg);
    };
