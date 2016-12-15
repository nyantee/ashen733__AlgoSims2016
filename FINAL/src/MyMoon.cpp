//
//  MyMoon.cpp
//  orbit
//
//  Created by Regina Flores on 9/22/16.
//
//

#include "MyMoon.hpp"

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
    
  
    ofCircle(*this, size);
    
    

   
}

float MyMoon::getYPosition(){
    
    return y;
    
    
}


float MyMoon::getXPosition(){
    
    return x;
    
    
}

float MyMoon::getSpeed(){
    
    return angle;
    
    
}



