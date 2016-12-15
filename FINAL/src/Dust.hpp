//
//  Dust.hpp
//  Prototyp2
//
//  Created by Nyantee Asherman on 12/13/16.
//
//

#pragma once
#include "ofMain.h"


class Dust {
    
    
public:
    
    
    
    void setup();
    void update();
    void draw(float disap);
    
    
    ofVec3f position;
    
    ofVec3f velocity;
    
    float circle;
    float move;
    
    float angle;
    
    float step;
    
    float moveSin;
    
    float ypos;
    
    float radius;
    
};
