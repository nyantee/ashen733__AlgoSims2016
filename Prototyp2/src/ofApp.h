#pragma once

#include "ofMain.h"
#include "MyMoon.hpp"
#include "Dust.hpp"
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
		
    MyMoon moon;
    
     vector<MyMoon> circles;
    
     vector<Dust> flecks;
    
     int num = 50;
    
    int fum = 2000;
    
        ofEasyCam cam;
    
    float time;
    
    ofxPanel gui;
    ofParameter<float> step;
    ofParameter<float> height;
    ofParameter<float> color;
    
    float _x;
    float _y;
    
    
};
