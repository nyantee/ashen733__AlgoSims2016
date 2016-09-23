//
//  particles.cpp
//  Fireworks
//
//  Created by Regina Flores on 9/15/16.
//
//

#include "particles.hpp"


void Particle::setup(){

    pos.x = ofGetWidth()/2;
    pos.y = 600;
    
    radius = ofRandom(5,12);
    
//    vel.x = ofRandom(-10,10);
//    vel.y = ofRandom(-5,-5);
    
    color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255),ofRandom(0,255));
    
    someNumber = ofRandom(1,400);
}

void Particle::explosion(){
    
    if (pos.y<100) {
        
        vel.x = ofRandom(-3,3);
        vel.y = 5;
        
        }
    
    
    else if (pos.y>300){
        
        vel.x = ofRandom(-10,10);
        vel.y = -10;
       
    }
    
    
    pos = pos + vel;

}

void Particle::draw(){

    ofSetColor(color);
    ofEllipse(pos.x, pos.y, radius, radius);
}

void Particle::restart(){

    pos.x = ofGetWidth()/2;
    pos.y = 600;
}









