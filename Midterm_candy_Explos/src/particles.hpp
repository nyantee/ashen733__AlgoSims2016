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
    ofPoint getPosition();
    float getRadius();
    float setRadius(float _radius);
    
    void restart();
    
    ofPoint pos;
    ofPoint vel;

    
//  ofVec2f getPosition();
    

    int someNumber;
    
    int grow;
    
    float radius;
  
    
        ofColor change;
    
    ofImage Sunflowers;
   
    
    
    
};



