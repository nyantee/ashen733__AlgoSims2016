//
//  Car.hpp
//  wk6_pathfollow
//
//  Created by Nyantee Asherman on 10/13/16.
//
//

#pragma once

#include "ofMain.h"
#include "Path.hpp"

class Car{
public:
    void setInit(ofVec2f l, float ms, float mf);
    void run();
    void follow(Path p);
    ofVec2f getNormalPoint(ofVec2f p, ofVec2f a, ofVec2f b);
    void update();
    void applyForce(ofVec2f force);
    void seek(ofVec2f target);
    void render();
    void borders();
    
    ofVec2f location;
    ofVec2f velocity;
    ofVec2f acceleration;
    float r;
    float maxforce;    // Maximum steering force
    float maxspeed;
    ofImage ski;
    
   
};