//
//  Snow.cpp
//  Spring
//
//  Created by Nyantee Asherman on 10/18/16.
//
//

#include "Snow.hpp"



void Snow::setup(ofVec2f pos){
    

    pos.x = ofRandom(300,900);
    pos.y = -10;
    
    radius = 10;
    
    
    vel.x = ofRandom(-3,3);
    vel.y = ofRandom(7, 10);
    
    color = ofColor(255);
    
    someNumber = 1,000;
}



ofPoint Snow::getPosition(){
    return pos;

}

void Snow::fall(){
    
    
    
    pos = pos + vel;
    
}

void Snow::draw(){
    
    
    
    ofSetColor(255);
    ofEllipse(pos.x, pos.y, 10, 10);
}

void Snow::restart(){
    
    
    if (pos.y < 600) {
        
        
        
        pos.x = ofRandom(300,900);
        pos.y = -10;
        
    }
    
}

