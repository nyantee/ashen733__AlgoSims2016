//
//  Dust.cpp
//  Prototyp2
//
//  Created by Nyantee Asherman on 12/13/16.
//
//

#include "Dust.hpp"

void Dust::setup(){
    
    
    float circle = 100;
    
    position.y = ofRandom(-2000,2000);
    
    position.x = ofRandom(-2000,2000);
    
     position.z = ofRandom(-3000,3000);
 
    
   
    velocity.y = ofNoise(ofRandom(0,1));
    
    velocity.x = ofNoise(ofRandom(0,1));
    
    velocity.z = ofNoise(ofRandom(0,1));
 
    
    
    
    
    
}






void Dust::update(){
    
    
    
    position+=velocity*(ofRandom(-10,10));
    
    step = .05;
    
    angle += step;
    
    
}

void Dust::draw(float disap){
    
    
    ofFill();
    
    ofSetColor(255, (255 - ofGetElapsedTimef()*10));
    
    
    ofDrawEllipse(position.x, position.y, 10,  10);
    
    
    
    
    
}

