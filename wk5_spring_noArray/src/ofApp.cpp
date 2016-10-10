#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
        
        num = 6;
    
    
    
        for(int i =0; i< num; i++){
            
            //initialize the arraw
            box tempVar;
            tempVar.setup();
            Boxes.push_back(tempVar);
            
            
            
        }
    
}



//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0; i< num; i++){
        //    for(int i=0; i< boxes.size(); i++){
        Boxes[i].update();
        Boxes[i].applyForce(ofVec2f (2,.4));
        Boxes[i].mouseDragged(ofGetWidth()/2, mouseY, NULL);
        Boxes[i].mousePressed(ofGetWidth()/2, mouseY, NULL);
        Boxes[i].mouseReleased(NULL, NULL, NULL);
       
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //    ofLine(anchor, ball);
    //    ofCircle(anchor, 10);
    //    ofCircle(ball, 20);
    
//      ofSetColor(0, 0, 255);
    
    // ------------------------------------
    
    
  
        
        ofSetColor(0, 0, 255);
        Boxes[0].draw();
        
        ofSetColor(0, 255, 255);
        Boxes[1].draw();
    
        ofSetColor(0, 200, 255);
        Boxes[2].draw();
    
        ofSetColor(100, 0, 255);
        Boxes[3].draw();
        
        ofSetColor(0, 100, 255);
        Boxes[4].draw();
        
        ofSetColor(0, 100, 100);
        Boxes[5].draw();
    
        ofSetColor(50, 100, 255);
        Boxes[6].draw();
    
        
    

   // --------------------------------------
    
  
    
//    ofDrawRectangle(anchor+10, 100, ball.y); //spring
//    ofDrawRectangle(anchor+10, 100, 100);
//    ofDrawRectangle(ball+10, 100, 100);
//    
//      ofSetColor(255, 0, 255);
    
    // --------------------------------------
    
    
//    ofDrawRectangle(<#float x1#>, <#float y1#>, <#float w#>, <#float h#>)
    
    
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

//--------------------------------------------------------------


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
