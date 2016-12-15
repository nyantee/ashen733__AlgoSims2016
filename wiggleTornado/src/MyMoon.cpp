

#include "MyMoon.hpp"
//
//  MyMoon.cpp
//  orbit
//
//  Created by Regina Flores on 9/22/16.
//
//



void MyMoon::set(float _dist, float _intAngle){
    
    
    radius = _dist;
    angle = _intAngle;
    
}


void MyMoon::update(float _step, ofPoint _center){
    
    angle+=  _step;
    
    x = _center.x + radius * cos(angle)*.1;
    y = _center.y + radius * sin(angle)*.1;
    
}

void MyMoon::draw(float size){
    
    
    
    ofSetLineWidth(2);
    
    ofNoFill();
    
    ofSetColor(255, 0, 0);
    ofCircle(*this, size);
    
    
}





