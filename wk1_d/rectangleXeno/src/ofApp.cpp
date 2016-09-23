#include "ofApp.h"

//--------------------------------------------------------------






void ofApp::setup(){

    // ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    
    myRect.pos.x = 10;
    myRect.pos.y = 10;
    
    pinkRec.pos.x = 20;
    pinkRec.pos.y = 50;
    
    blueRec.pos.x = 50;
    blueRec.pos.y = 20;
    
    greenRec.pos.x = 100;
    greenRec.pos.y = 50;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    myRect.xenoToPoint(mouseX, mouseY);
    
    pinkRec.xenoToPoint(mouseX, mouseY);
    blueRec.xenoToPoint(mouseX, mouseY);
   greenRec.xenoToPoint(mouseX, mouseY);
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 255);
    myRect.draw();
    ofSetColor(0, 0, 255);
    pinkRec.draw();
    
    ofSetColor(255, 0, 0);
    blueRec.draw();
    ofSetColor(0, 255, 0);
    greenRec.draw();

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
