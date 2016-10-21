//
//  Snow.hpp
//  Spring
//
//  Created by Nyantee Asherman on 10/18/16.
//
//

#pragma once

#include "ofMain.h"

class Snow{
    
public:
    
    void draw();
    void setup(ofVec2f pos);
    void fall();
    
    void restart();
    
    ofPoint pos;
    ofPoint vel;
    ofColor color;
    
    float radius;
    int someNumber;
    
    ofPoint getPosition();
    
};
