//
//  particles.hpp
//  Fireworks
//
//  
//
//

#pragma once 

#include "ofMain.h"

class Particle{

public:
    
//    void link();
    
    
    
    
    void draw();
    void setup();
    void explosion();
    void disappear();
    
    void restart();
    
    ofPoint pos;
    ofPoint vel;

    
//  ofVec2f getPosition();
    
    float radius;
    int someNumber;
    
    int grow;
  
    
        ofColor change;
    
    ofImage Sunflowers;
   
    
    
    
};



