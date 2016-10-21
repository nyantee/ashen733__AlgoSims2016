#pragma once


#include "ofMain.h"
#include "particles.hpp"//bad naming convention
#include "shape.hpp"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
//        void link();
   
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
    
    ofVec2f getPosition();
    
   
    
    
		
    vector<Particle> particles;
    vector<shape>lines;
    int num;
    
    
    
};





