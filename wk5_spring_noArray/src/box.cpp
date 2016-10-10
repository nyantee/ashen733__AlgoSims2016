//
//  box.cpp
//  wk5_spring_noArray
//
//  Created by Nyantee Asherman on 10/7/16.
//
//

#include "box.hpp"

//#include "ofApp.h"




void box::setup(){
    
    ofBackground(0);
    k = 0.05;
    restLength = 200;
    
    anchor = ofVec2f(ofGetWidth()/2, 20);
    ball = ofVec2f(ofGetWidth()/2, restLength);
    
    dragging = false;
    
}
//--------------------------------------------------------------

//Our own function in the main

void box::applyForce(ofVec2f force){
    //    acc += force;
    acc.x += force.x;
    acc.y += force.y;
}


//--------------------------------------------------------------
void box::update(){
    
    if(dragging == true){
        return; //go out of update of function
    }
    
    //Steps to create the springy effect
    ofVec2f force = ball - anchor; // the direction of the vector
    
    float currentLength = force.length();
    float x = currentLength - restLength;
    //normalize refers to vector math whereby you multiply the vector by the "unit vector"
    force.normalize();
    force *= -1 * k * x;  //applying Hooke's Law
    
    applyForce(force);
    applyForce(ofVec2f(0,1.0));//brings the x component back to 0
    
    //Add dynamic movement
    vel+=acc;
    vel*=0.98; // gravity
    ball+=vel;
    acc*=0; //set back to 0 to bring the spring thing back to a neutral position.
}

//--------------------------------------------------------------
void box::draw(){
    
    //    ofLine(anchor, ball);
    //    ofCircle(anchor, 10);
    //    ofCircle(ball, 20);
    
   
    
    // ------------------------------------
    
    
    ofDrawRectangle(anchor, 100, ball.y); //spring
    ofDrawRectangle(anchor, 100, 100);
    ofDrawRectangle(ball, 100, 100);

    
    // --------------------------------------
    
    
    
    //    ofDrawRectangle(anchor+10, 100, ball.y); //spring
    //    ofDrawRectangle(anchor+10, 100, 100);
    //    ofDrawRectangle(ball+10, 100, 100);
    //
    //      ofSetColor(255, 0, 255);
    
    // --------------------------------------
    
    
    //    ofDrawRectangle(<#float x1#>, <#float y1#>, <#float w#>, <#float h#>)
    
    
}


//--------------------------------------------------------------
void box::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void box::mouseDragged(int x, int y, int button){
    
    if(dragging==true){
        ball.set(ofGetWidth()/2, mouseY);
    }
    
}

//--------------------------------------------------------------
void box::mousePressed(int x, int y, int button){
    
    if(ofVec2f(x,y).distance(ball) > 200){
        ball.set(ofGetWidth()/2, mouseY);
        dragging = true;
        vel *= 0;
        
    }
}

//--------------------------------------------------------------
void box::mouseReleased(int x, int y, int button){
    
    dragging = false;
}

//--------------------------------------------------------------