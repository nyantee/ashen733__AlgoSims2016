//
//  Particle.hpp
//  Spring
//
//  Created by Vishaal Ravikumar on 10/2/16.
//
//

#pragma once

#include "ofMain.h"
class Particle {
public:
    Particle();
    
    void setInit(ofVec2f _pos, ofVec2f _vel = ofVec2f(0,0));
    
    float   getRadius();
    ofVec2f getPosition();
    ofVec2f getVelocity();
    
    void addForce(ofVec2f _force);
    
    void bounding();
    
    void update();
    void draw();
    
    bool bFix;
    
    //private:
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f acc;
    
    float radius;
    float damp;
    
    
};