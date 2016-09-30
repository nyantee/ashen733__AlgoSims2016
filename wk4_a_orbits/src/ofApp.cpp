#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    num = 8;
//    size = 100;
//    pos = 0;
    
    for(int i =0; i< num; i++){
        
        //initialize the arraw
        MyMoon tempVar;
        tempVar.set(100,0);
       planets.push_back(tempVar);
        
//        size+=5;
//        pos+=.14
        
    }
    
//    moon.set(100,0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    x= ofGetWidth()*0.5;
    y= ofGetHeight()*0.5;
    step=0.01;
    
    
     for(int i =0; i< num; i++){
    
    planets[i].update(step, ofPoint(x, y));
         
         step+=.005;
         //would it be better to use pointer here? why?
         
         x+=5;
         y+= 5;
        
         
     }
    
    
//    planets[i].update(0.01, ofPoint(ofGetWidth()*0.5, ofGetHeight()*0.5));

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
     for(int i =0; i< num; i++){

   
    
    planets[i].draw(ofRandom(10,50));
         
     }
    
    ofSetColor(0, 0, 255);
    ofDrawCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, 30);
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
