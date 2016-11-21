//
//  Particle.hpp
//  cclab_OF_wk2
//
//  Created by Nyantee Asherman on 11/15/16.
//
//


#pragma once
#include "ofMain.h"


class Particle{
    
public:
    
    Particle(ofVec2f pos);
    
    void resetForces();
    void applyForce(ofVec2f force);
    void update(float multiplier);
    void draw();
    
    
    ofVec2f mPosition, mVelocity, mAcceleration;
    
    float mLifeSpan;
    const float INITIAL_LIFE_SPAN = 120.0f;
    const float BLINKING_LIFE_SPAN = 100.0f; //SMALL F DEFINES AS A FLOAT
};
