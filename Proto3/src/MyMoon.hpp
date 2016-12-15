//
//  MyMoon.hpp
//  orbit
//
//  
//
//

#pragma once
#include "ofMain.h"

//Inheritence
class MyMoon : public ofPoint    {
    public:
    
    void set(float _intAngle);
    void update(float _step, ofVec3f _center);
    
    void draw(float size);
    
    //------------------
    
   
    
    float getYPosition();
    float getXPosition();
    float getRings();
    
    ///variables
    
    float radius;
    float move;
    float sangle;
    
    
    
    float posx;
    float posy;
    
    int num;
    int newNum;
    

};