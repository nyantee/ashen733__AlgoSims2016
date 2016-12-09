//
//  particles.cpp
//  tornado_attempt2
//
//  Created by Nyantee Asherman on 12/1/16.
//
//

#include "particles.hpp"


Particles::Particles(){
    
  
    
}


void Particles::setup(){
    
    
    float circle = 100;
    
    position.y = 100;
    
    position.x = moveSin;
    
    position.z = move;
    
    angle = 0;
    move = 0;

  
    
}


void Particles::draw(float radius, float ypos, float rotgen, float rotx, float roty, float rotz){
    
    ofRotate(rotgen, rotx, roty, rotz);
    
    
    ofDrawRectangle(ypos, moveSin, move, radius);
    
    
    
    
    
    //ofDrawRectangle(ypos, moveSin, move, radius);
 
    
   // ofDrawCircle(<#float x#>, <#float y#>, <#float radius#>)
    
    ofSetLineWidth(6);
    ofNoFill();
    
}



void Particles::update(){
    

    
    
    moveSin = 100 + 300 * sin(angle);
    
    move = 100 + 300 * cos(angle);
    
    //circle = _center.x + radius * cos(angle);
    
    step = 0.01;
    
    angle += step;
    
    
}




