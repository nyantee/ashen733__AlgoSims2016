//
//  particles.cpp
//  
//
//
//
//

#include "particles.hpp"


void Particle::setup(){
    

    
    change = 200,200,100;
    
    

    pos.x = 500;
    pos.y = 0;
    
    radius = 2;
    
    vel.x = ofRandom(-10,10);
    vel.y = ofRandom(5,10);
    

    
// Sunflowers.load("images/sunflowers1.jpg");
    
    someNumber = ofRandom(1,400);
}

void Particle::explosion(){

    
    
    pos = pos + vel;
    
    radius = radius + pos.y*.007;
    
   

}

void Particle::draw(){
    
    
    
    
    
 
    ofSetColor(ofRandom(255),ofRandom(255), ofRandom(255));
    
    ofDrawRectangle(pos.x, pos.y, radius, radius);
    
    ofDrawCircle(pos.x, pos.y, radius);
    
    
//      Sunflowers.draw(pos.y, pos.x, radius, radius);
    

  

//    ofDrawLine(-pos.y,pos.x,pos.y,pos.x);
//    ofDrawCircle(pos.y,pos.x,radius);
//    ofDrawCircle(pos.y,0,radius);
  
    
    
}


void Particle::restart(){

    
    pos.x = 500;
    pos.y = 0;
    
    radius = 1;
}



//
//ofVec2f Particle::getPosition(){
//    return pos;
//}

//
//void Particle::link(){
//    
//    if (pos.x == (ofGetMouseX()+20) || pos.y == (ofGetMouseY() - 20) ){
//        
//        ofSetColor(150,100,255);
//        
//}
//
//
//}

