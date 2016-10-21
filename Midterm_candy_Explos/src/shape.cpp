//
//  shape.cpp
//  midterm_new_catipillar
//
//  Created by Nyantee Asherman on 10/20/16.
//
//

#include "shape.hpp"




void shape::setup(){
    
    
    
    change = 200,200,100;
    
    
    
    pos.x = 500;
    pos.y = 0;
    
    radius = 2;
    
    vel.x = ofRandom(-10,10);
    vel.y = ofRandom(5,10);
    
    //    color = ofColor(ofRandom(200), ofRandom(200), ofRandom(200),100);
    
    Sunflowers.load("images/sunflowers1.jpg");
    
    someNumber = ofRandom(1,400);
}

void shape::explosion(){
    
    
    
    pos = pos + vel;
    
    radius = radius + pos.y*.008;
    
    
    
}

void shape::draw(){
    
    
    
    
    
//    
//    ofSetColor(ofRandom(200), ofRandom(200), ofRandom(200));
//    
//    ofDrawRectangle(pos.x, pos.y, radius, radius);
//    
//    ofDrawCircle(pos.x, pos.y, radius);
    
    
    //      Sunflowers.draw(pos.y, pos.x, radius, radius);
    
    
//ofDrawLine(-pos.y,pos.x,pos.y,pos.x);
    
    
        ofDrawRectangle(pos.x,pos.y,5,5);
    
 
    
    
    
}







void shape::restart(){
    
    
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
//
//        
//}
//
//
//}

