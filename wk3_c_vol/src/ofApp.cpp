#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

    num = 2500;

    for(int i =0; i< num; i++){

    
    //initialize the arraw
        Particle tempVar;
        tempVar.setup();
        particles.push_back(tempVar);
      
        
//        ofLoadImage(300, "wk3_c_vol/volcano.jpg")
        

        
        
        
    }
    volcano.load("images/volcano.jpg");

    


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    drawVolcano();

//    ofBackground(255);
    for(int i=0; i< num; i++){
    //    for(int i=0; i< particles.size(); i++){
        particles[i].explosion();
        particles[i].draw();
        
        //to log data to the console:
        cout<<ofGetFrameNum()<<endl;
        if(ofGetFrameNum() % particles[i].someNumber  == 0){
            particles[i].restart();
        }
        
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

void ofApp::drawVolcano(){
    
        ofSetColor(255, 255, 255);
        volcano.draw(0, 0);
        
    }
