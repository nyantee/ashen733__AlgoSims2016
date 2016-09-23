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
    pos.y = 300;
    
    radius = ofRandom(10,50);
    
    
    vel.x = ofRandom(3,-3);
    vel.y = ofRandom(-1, -3);
    
    color = ofColor(ofRandom(255), ofRandom(10), ofRandom(10), ofRandom(100,255));
    
    someNumber = 1,400;
}

void Particle::explosion(){
    
//    if ((pos.y<100)) {
//        
//         vel.y = ofRandom(2, 5);
//        
//    }
    
    
    
    pos = pos + vel;

}

void Particle::draw(){
    
    

    ofSetColor(color);
    ofEllipse(pos.x, pos.y, ofRandom(10,50), 10);
}

void Particle::restart(){
    
    
    if (pos.y < (ofRandom(100,200))) {
        
  

    pos.x = ofGetWidth()/2;
    pos.y = 300;
        
    }

  }







