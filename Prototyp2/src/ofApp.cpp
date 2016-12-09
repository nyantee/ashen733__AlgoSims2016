#include "ofApp.h"

//--------------------------------------------------------------





void ofApp::setup(){
    
    
    gui.setup();
    gui.add(step.set("step", 0.0001, 0.0001,0.001));
    
    
    for(int i =0; i < num; i++){
        
        float radius = 800 - i*10;
        
        
        
        
        MyMoon p;
        circles.push_back(p);
        
        circles[i].set(radius,0);
        
       
        
        //color.push_back(ofColor(ofRandom(255), ofRandom(255), ofRandom(255)));
        
        
        
      // moon.set(100,0);
        
        
        
    }
    
   
}

//--------------------------------------------------------------
void ofApp::update(){
    
        //ofMap(time, 0, ofGetElapsedTimef(), 0, 1);
    
    float Onoise = ofNoise(0.0005);
    
    //float noise = ofNoise(0.005,0.005, ofGetElapsedTimef());
    
    
    for(int i =0; i < num; i++){
        
        
        
        float _x= -mouseX*2;
        float _y= -mouseY*3;
        
circles[i].update((Onoise+=step), ofPoint(_x, _y));
        
        
        
    //circles[i].update(step, ofPoint(0, 0));

        //circles[i].update(sin(ofRandom(0,.05)), ofPoint(0, 0));
        
        //use noise here for less random effect
        
        
    }
    
    
      std::cout << "step::" <<  Onoise+step << endl;

}

//--------------------------------------------------------------
void ofApp::draw(){
    
  
    
    
    

    cam.begin();
    
    ofPushMatrix();
    
    for(int i =0; i < num; i++){
    
        float size = 50 + (i*10);
        ofPoint zShift( 0, 0, 30 );
        ofTranslate(zShift);
    
        circles[i].draw(size);
        
    }
    
    ofPopMatrix();
    
    cam.end();
    
    
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
