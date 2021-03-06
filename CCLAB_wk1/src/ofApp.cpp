#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    
    num = 20;
    for(int i =0; i< num; i++){
    
    //initialize the array
        Particle tempVar;
        tempVar.setup();
        particles.push_back(tempVar);
        
        
        shape tempV;
        tempV.setup();
        lines.push_back(tempV);
        
        
      
    
    }
    
    
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
 

    
    for(int i=0; i<num; i++){
        
//          particles[i].setRadius(50);
        
        
        particles[i].explosion();
               lines[i].explosion();
        
        
    
        
}
}


//--------------------------------------------------------------
void ofApp::draw(){
    

    
//    ofRotate(90);

    ofBackground(0);
    for(int i=0; i< num; i++){
  
        particles[i].draw();
        
 
        lines[i].draw();
        
        //to log data to the console:
        cout<<ofGetFrameNum()<<endl;
    
    
        
        
        if(ofGetFrameNum() % particles[i].someNumber  == 0){
            particles[i].restart();
            lines[i].restart();
        }
        
//        if(ofGetFrameNum() % particles[i].someNumber  == 0)
    
       
        
        
    
    }

        
}
    



//--------------------------------------------------------------
//void ofApp::link(){
//    
//    for(int i=0; i< num; i++){
//       
//        particles[i].link();
//    }
//    
//    
//}

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
    
    
    cout << "PRESSED";
    
    mouse = ofPoint(mouseX, mouseY);
    
    
    for(int i =0; i< num; i++){
        
        if( particles[i].getPosition().distance(mouse) < particles[i].getRadius()){
            particles[i].setRadius(0);
        }
        
        
    }

    
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
