#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofSetBackgroundAuto(false);
    
    moon.set(100,.25);
    redp.set(130,.3);
    greenp.set(190,.6);
    bluep.set(160,.17);
    orangep.set(180,.5);
    purplep.set(155,.08);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    moon.update(0.03, ofPoint(ofGetWidth()*0.7, ofGetHeight()*0.5));
    
     redp.update(0.05, ofPoint(ofGetWidth()*0.6, ofGetHeight()*0.5));
    
     greenp.update(0.06, ofPoint(ofGetWidth()*0.35, ofGetHeight()*0.5));
    
     bluep.update(0.075, ofPoint(ofGetWidth()*0.55, ofGetHeight()*0.5));
    
     orangep.update(0.08, ofPoint(ofGetWidth()*0.4, ofGetHeight()*0.50));
    
    purplep.update(0.095, ofPoint(ofGetWidth()*0.45, ofGetHeight()*0.5));
    
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
   

//    ofSetColor(0, 0, 255);
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, 30);
    
    moon.draw(15,255,0,10);
    
    
//    ofSetColor(0, 0, 255);
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, 30);
    
   redp.draw(25,255,0,50);
    
//    ofSetColor(0, 0, 255);
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, 30);
    
    greenp.draw(20,255,0,80);
    
//    ofSetColor(0, 0, 255);
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, 30);
    
    bluep.draw(15,255,0,120);
    
//    ofSetColor(0, 0, 255);
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, 30);
    
    orangep.draw(10,255,0,200);
    
//    ofSetColor(0, 0, 255);
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, 30);
    
    purplep.draw(5,255,0,255);
    
    
    
    ofSetColor(0,0,255,10);
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    
    
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
