//
//  MyMoon.cpp
//  orbit
//
//  Created by Regina Flores on 9/22/16.
//
//

#include "MyMoon.hpp"

void MyMoon::set(float _dist, float _intAngle){


    radius = _dist; //distance away from center planet
    angle = _intAngle;

}


void MyMoon::update(float _step, ofPoint _center){

    angle+= _step;
    
    x = _center.x + radius * cos(angle);
    y = _center.y + radius * sin(angle);

}

void MyMoon::draw(int size, int r, int g, int b){

    ofSetColor(r, g, b);
    ofCircle(*this, size);
    
    
}

//step controls the speed of the shapes





