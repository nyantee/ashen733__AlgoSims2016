#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    

    
    ofBackground(0, 0, 0);
    
    for(int i =0; i < 3; i++){
        
        particles[i].setInit(ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight())));
    }
    
    
    particles[0].bFix = true;
    
    d=.07;
    
    //spring array
    springs[0].set(&particles[0], &particles[1]);
    
    particles[0].setInit(ofPoint(0,10),ofPoint(0,10)) ;
    
    springs[0].restDist = d;
    springs[1].set(&particles[1], &particles[2]);
    springs[1].restDist = d;
    springs[2].set(&particles[2], &particles[3]);
    springs[2].restDist = d;
    springs[3].set(&particles[3], &particles[4]);
    springs[3].restDist = d;
    springs[4].set(&particles[4], &particles[5]);
    springs[4].restDist = d;
    springs[5].set(&particles[5], &particles[6]);
    springs[5].restDist = d;
    springs[6].set(&particles[6], &particles[7]);
    springs[6].restDist = d;
    springs[7].set(&particles[7], &particles[8]);
    springs[7].restDist = d;
    springs[8].set(&particles[8], &particles[9]);
    springs[8].restDist = d;
    springs[9].set(&particles[9], &particles[10]);
    springs[9].restDist = d;
    springs[10].set(&particles[10], &particles[11]);
    springs[10].restDist = d;
    springs[11].set(&particles[11], &particles[12]);
    springs[11].restDist = d;
    springs[12].set(&particles[12], &particles[13]);
    springs[12].restDist = d;
    springs[13].set(&particles[13], &particles[14]);
    springs[13].restDist = d;
    springs[14].set(&particles[14], &particles[15]);
    springs[14].restDist = d;
    springs[15].set(&particles[15], &particles[16]);
    springs[15].restDist = d;
    springs[16].set(&particles[16], &particles[17]);
    springs[16].restDist = d;
    springs[17].set(&particles[17], &particles[18]);
    springs[17].restDist = d;
    springs[18].set(&particles[18], &particles[19]);
    springs[18].restDist = d;
    springs[19].set(&particles[19], &particles[20]);
    springs[19].restDist = d;
    springs[20].set(&particles[20], &particles[21]);
    springs[20].restDist = d;
    springs[21].set(&particles[21], &particles[22]);
    springs[21].restDist = d;
    springs[22].set(&particles[22], &particles[23]);
    springs[22].restDist = d;
    springs[23].set(&particles[23], &particles[24]);
    springs[23].restDist = d;
    springs[24].set(&particles[24], &particles[25]);
    springs[24].restDist = d;
    springs[25].set(&particles[25], &particles[26]);
    springs[25].restDist = d;
    springs[26].set(&particles[26], &particles[27]);
    springs[26].restDist = d;
    springs[27].set(&particles[27], &particles[28]);
    springs[27].restDist = d;
    springs[28].set(&particles[28], &particles[29]);
    springs[28].restDist = d;
    springs[29].set(&particles[29], &particles[30]);
    springs[29].restDist = d;
    springs[30].set(&particles[30], &particles[31]);
    springs[30].restDist = d;
    springs[31].set(&particles[31], &particles[32]);
    springs[31].restDist = d;
    springs[32].set(&particles[32], &particles[33]);
    springs[32].restDist = d;
    springs[33].set(&particles[33], &particles[34]);
    springs[33].restDist = d;
    springs[34].set(&particles[34], &particles[35]);
    springs[34].restDist = d;
    springs[35].set(&particles[35], &particles[36]);
    springs[35].restDist = d;
    springs[36].set(&particles[36], &particles[37]);
    springs[36].restDist = d;
    springs[37].set(&particles[37], &particles[38]);
    springs[37].restDist = d;
    
}

//-----------------------------------------------------------


void ofApp::setup(ofVec2f pos){
    
    //snow
    
    num = 1000;
    
    for(int i =0; i< num; i++){
        
        
        //initialize the arraw
        Snow tempVar;
        tempVar.setup(pos);
        flakes.push_back(tempVar);
        
        
    }
}

//-------------------------

void ofApp::update(){
    particles[0].pos.set(mouseX, mouseY);
    
    
    for(int i =0; i< 37; i++){
        springs[i].update();
    }
    
    for(int i = 0; i < 38; i++){
        particles[i].addForce(ofPoint(0,0.1));
        particles[i].update();
        particles[i].bounding();
    }
    
}




//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    
    for(int i =0; i< 37; i++){
        
        springs[i].draw();

        
        }
    
    for(int i = 0; i < 38; i++){
        
            ofSetColor(255, i*5, i*2);
        
        particles[i].draw();
    }
    
//     ofSetColor(0);
  
    
    for(int j =0; j< num; j++){
        
          num = 1000;
        
        
      flakes[j].draw();
        
        
    }
}


    
void ofApp::fall(){
    
    
    num = 1000;
    
    for(int j =0; j< num; j++){
        
        
        flakes[j].fall();
        
        
    }
    
}



void ofApp::restart(){
    
    
    
    num = 1000;
    
    for(int j =0; j< num; j++){
        
        
        flakes[j].restart();
        
        
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