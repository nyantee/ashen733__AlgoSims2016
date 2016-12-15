#include "ofApp.h"

//--------------------------------------------------------------





void ofApp::setup(){
    
    
    
    
    
    
    gui.setup();
    gui.add(step.set("step", 0.0001, 0.0001,5));
    
    
  //number of rings
    
//    Rings[1].levels(10.0);
//    Rings[2].levels(20.0);
//    Rings[3].levels(30.0);
//    Rings[4].levels(40.0);
//    Rings[5].levels(50.0);

    
    Rings[1].set(0);
      Rings[2].set(0);
    
     // Rings[3].set(0);
//      Rings[4].set(0);
//      Rings[5].set(0);
    
    debx == 0;
    deby == 0;
    debz == 0;
    
    

    
    littleRing = ofRandom(10,20);
    bigRing = ofRandom(20,40);
    
    
   
}

//--------------------------------------------------------------
void ofApp::update(){
    
  
  
   
  

    
    
    //float _x= ofGetElapsedTimef()*.2;
    //float _y= ofGetElapsedTimef()*.2;
   
    
    //circles[i].update(step, ofPoint(0, 0));
    
    //circles[i].update(sin(ofRandom(0,.05)), ofPoint(0, 0));
    
    //use noise here for less random effect
    
    
      float Onoise = ofNoise(0.0005);
    
    
    
    
    
changedir = 0.05;
    
    
    Rings[1].update(0.05, ofVec3f(-600,0,-10000));
    
       int bigRing = 0;
    
//    
//    if (Rings[1].getXPosition()==50){
//        
//     
//        changedir== 10;
//    }
   
    
//    else{
//
//    }
    
    
    
//    
// else if (Rings[1].getYPosition()== 300 || Rings[1].getYPosition() == -300){
//        
//       changedir = !changedir;
//     
//    }
//    
    


Rings[2].update(-0.05, ofVec3f(800,0,700));
    

  //Rings[3].update(.01, ofVec3f(0,0,-700));
    
   
    int littleRing = 0;

        
//   Rings[4].update((Onoise+=step), ofVec3f(ofVec3f(0,0,-700)));
//    
//  Rings[5].update((Onoise+=step), ofVec3f(ofVec3f(0,0,-700)));
    
    ////////////////////////////////////////////
//    
//    sodist = ofDist(Rings[1].getXPosition(), Rings[1].getYPosition(), Rings[2].getXPosition(),Rings[2].getYPosition());
//    
//    
//    if(sodist<10){
//        
//        int bigRing = Rings[2].getRings();
//        int littleRing = 0;
//        
//    }
    
    /////////PRINT////////////////////////////
    
    std::cout << "XGET::" << Rings[1].getXPosition() << endl;

    std::cout << "YGET::" << Rings[1].getYPosition() << endl;
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
  
    
    ofBackground(0);
    

    cam.begin();
    
    ofPushMatrix();
    
    
  
    
    
  //ofRotateY(50);
   
    //the float here is the start  radius of the circle
    
 
    
    
    Rings[1].draw(10);
         Rings[2].draw(20);
         //Rings[3].draw(30);
//         Rings[4].draw(40);
//         Rings[5].draw(50);
    
    
    
    
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
