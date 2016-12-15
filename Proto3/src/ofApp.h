#pragma once

#include "ofMain.h"
#include "MyMoon.hpp"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    
    
    
        ofEasyCam cam;
    
    float time;
    
    ofxPanel gui;
    ofParameter<float> step;
    
    ofPoint middle;
    
    MyMoon Rings[4];
    
     //vector<MyMoon> Rings;
    

    ofVec3f cstart;
    
    ofVec3f astart;
    
    ofVec3f bstart;
    
    float changedir;
    
    float debx,deby,debz,dangle;
    
    int sodist;
    
    int bigRing;
    int littleRing;
    
};
