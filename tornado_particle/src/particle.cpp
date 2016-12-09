//
//  particle.cpp
//  tornado_particle
//
//  Created by Nyantee Asherman on 12/2/16.
//
//

#include "particle.hpp"


void Particles::setup(){
    
    
    float circle = 100;
    
    position.y = 100;
    
    position.x = moveSin;
    
    position.z = move;
    
    angle = 0;
    move = 0;
    
    
    
}


void Particles::draw(){
    
    //ofRotate(rotgen, rotx, roty, rotz);
    
    
    //ofDrawRectangle(ypos, moveSin, move, radius);
    
    
    
    
    
    ofDrawCircle(move, moveSin, move, 20);
    
    
    // ofDrawCircle(<#float x#>, <#float y#>, <#float radius#>)
    
    //ofSetLineWidth(6);
    //ofNoFill();
    
}



void Particles::update(){
    
    
    
    
    moveSin = 100 + 300 * sin(angle);
    
    move = 100 + 300 * cos(angle);
    
    //circle = _center.x + radius * cos(angle);
    
    step = 0.01;
    
    angle += step;
    
    
}