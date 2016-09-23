#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //many balls
    for(int i = 0; i< 100; i++){
        
        MyBall temp;
        manySunnys.push_back(temp);
    }
    
    ofSetBackgroundAuto(false);
    ofBackground(50,0,200);
    ofEnableAlphaBlending();
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    sunny.update(); //one ball
    
    //many balls
    for(int i = 0; i< 100; i++){
        
        manySunnys[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 0);
    sunny.draw();//one ball
    
    //many balls
    for(int i = 0; i< 100; i++){
        ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
        manySunnys[i].draw();
    }
    
    ofSetColor(150,60,200,10);
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
