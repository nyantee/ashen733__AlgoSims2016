#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    move = ofVec2f(10,0);
    
    
    gui.setup();
    gui.add(blockSize.setup("blockSize", 60, 10, 300));
    gui.add(blockSize.setup("blockSize", 60, 10, 300));
    gui.add(blockSize.setup("blockSize", 60, 10, 300));
    gui.add(blockSize.setup("blockSize", 60, 10, 300));
    
    
    ofBackground(0);
    k = 0.05;
    restLength = 200;
    
    
    anchor = ofVec2f(ofGetWidth()/2, 20);
    ball = ofVec2f(ofGetWidth()/2, 400);
    
    
    dragging = false;
    
}
//--------------------------------------------------------------

//Our own function in the main

void ofApp::applyForce(ofVec2f force){
    //    acc += force;
    acc.x += force.x;
    acc.y += force.y;
}

//--------------------------------------------------------------
void ofApp::update(){
    
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
    
    
    if (ball.y<20){
        ball.set(ofGetWidth()/2,20);
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
    ofDrawRectangle(anchor += move, blockSize, ball.y + 10); //spring
    ofDrawRectangle(anchor += move, blockSize, blockSize);
    ofDrawRectangle(ball += move, blockSize, blockSize);
    

    
//    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
//    ofDrawRectangle(anchor, blockSize, ball.y); //spring
//    ofDrawRectangle(anchor, blockSize, blockSize);
//    ofDrawRectangle(ball, blockSize, blockSize);
//    
//  
//    
//    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
//    ofDrawRectangle(anchor, blockSize, ball.y); //spring
//    ofDrawRectangle(anchor, blockSize, blockSize);
//    ofDrawRectangle(ball, blockSize, blockSize);
//    
//
//    
//    ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
//    
//    ofDrawRectangle(anchor, blockSize, ball.y); //spring
//    ofDrawRectangle(anchor, blockSize, blockSize);
//    ofDrawRectangle(ball, blockSize, blockSize);
    
    gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    if(dragging==true){
        ball.set(ofGetWidth()/2, mouseY);
    }
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    if(ofVec2f(x,y).distance(ball) > 0){
        ball.set(ofGetWidth()/2, mouseY);
        dragging = true;
        vel *= 0;
        
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    dragging = false;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
