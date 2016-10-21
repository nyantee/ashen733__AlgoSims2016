#pragma once

#include "ofMain.h"
#include "Particle.hpp"
#include "Spring.hpp"
#include "Snow.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void setup(ofVec2f);
    void fall();
    void restart();
    
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
    
    
    Particle particles[38];
    Spring springs[37];
    
    int d = 0;
    
    vector<Snow> flakes;
    int num;
    
    

};
