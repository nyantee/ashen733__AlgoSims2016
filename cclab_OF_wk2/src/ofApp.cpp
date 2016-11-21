#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofBackground(100, 25, 245);
    mGravity = ofVec2f(0.f, 0.02f); //0.f means 0.0

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    for (int i = 0; i < mSystems.size(); i++){
        
        mSystems[i].update(mGravity);
        
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    for (int i = 0; i < mSystems.size(); i++){
        
        mSystems[i].draw();
        
    }
    

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
    
    ParticleSystem system(ofVec2f(x,y));
    
    mSystems.push_back(system);

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
