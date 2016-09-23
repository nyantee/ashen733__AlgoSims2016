//
//  particles.cpp
//  Fireworks
//
//  Created by Regina Flores on 9/15/16.
//
//

#include "particles.hpp"


void Particle::setup(){

    pos.x = 600 + radius * sin (0.785398);
    pos.y = 600 + radius * cos (0.785398);
    
    radius = ofRandom(5,12);
    
    
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255),ofRandom(0,255));
    
    someNumber = ofRandom(1,400);
}

void Particle::explosion(){
    
        
        vel.x = ofRandom(-15,15);
        vel.y = -5;
       
   
    
    pos = pos + vel;

}

void Particle::draw(){

    ofSetColor(color);
    ofEllipse(pos.x, pos.y, radius, radius);
}

void Particle::restart(){

    pos.x = 600 + radius * sin (0.785398);
    pos.y = 600 + radius * cos (0.785398);
}









