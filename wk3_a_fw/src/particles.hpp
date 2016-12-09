//
//  particles.hpp
//  Fireworks
//
//  Created by Regina Flores on 9/15/16.
//
//

#pragma once 

#include "ofMain.h"

class Particle{

public:
    
    void draw();
    void setup();
    void explosion();
    
    void restart();
    
    ofPoint pos;
    ofPoint vel;
    ofColor color;
    
    float radius;
    int someNumber;
    
    float mLifeSpan;
    
    const float INITIAL_LIFE_SPAN = 120.0;
    const float BLINKING_LIFE_SPAN = 100.0; //SMALL F DEFINES AS A FLOAT
    
};



