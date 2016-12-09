#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    
    gui.setup();
    gui.add(rotgen.setup("rotgen", 60, 10, 360));
    gui.add(rotx.setup("rotx", 60, 0, 360));
    gui.add(roty.setup("roty", 60, 0, 360));
    gui.add(rotz.setup("rotz", 60, 0, 360));
    
    
    
    
    num= 100;
    for(int i =0; i < num; i++){
        
        Particles p;
        debris.push_back(p);
        
        debris[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
  
    for(int i = 0; i < num; i++){
        
        debris[i].update();

        
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    gui.draw();
    
    cam.begin();
    
    ofPushMatrix();
    
 
    for(int i = 0; i < num; i++){
        
        debris[i].draw((600-i*20), (100+i*10), rotgen, rotx, roty, rotz);
        
        
        
    }

       
    ofPopMatrix();
    
    
    cam.end();
    

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
