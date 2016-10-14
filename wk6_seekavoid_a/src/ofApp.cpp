#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    dest1 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    dest2 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    dest3 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    dest4 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    dest5 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    
    
    
    car1.setInit( ofGetWindowSize() / 2, ofPoint(2, -5) );
    car2.setInit( ofGetWindowSize() / 3, ofPoint(2, 5));
    car3.setInit( ofGetWindowSize() / 4, ofPoint(4, -4));
    car4.setInit( ofGetWindowSize() / 5, ofPoint(10,-3 ));
    car5.setInit( ofGetWindowSize() / 6, ofPoint(8, -5));
    
    car1.color = ofColor(0,255,0);
    car2.color = ofColor(0,0,255);
      car3.color = ofColor(0,200,255);
      car4.color = ofColor(200,0,255);
      car5.color = ofColor(50,0,200);
    
    ofBackground(255);
    
  
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // apply steering force
    car1.seek( dest1 );
    car2.seek( dest2 );
    car3.seek( dest3 );
    car4.seek( dest4 );
    car5.seek( dest5 );
    
    
    // apply repelling force
    float area = 200;
    if( car1.getPosition().distance( car2.getPosition() ) < area ){
        car1.color = ofColor(255,0,0);
        car2.color = ofColor(255,0,0);
        
        car1.addRepulsionForce( car2.getPosition(), area,  0.1 );
        car2.addRepulsionForce( car1.getPosition(), area, 0.1 );
    }else{
        car1.color = ofColor(0,255,0);
        car2.color = ofColor(0,0,255);
    }
    
        //----------------
        
      
        if( car2.getPosition().distance( car3.getPosition() ) < area ){
            car2.color = ofColor(255,0,0);
            car3.color = ofColor(255,0,0);
            
            car2.addRepulsionForce( car3.getPosition(), area,  0.1 );
            car3.addRepulsionForce( car2.getPosition(), area, 0.1 );
        }else{
            car2.color = ofColor(0,255,0);
            car3.color = ofColor(0,255,0);
        }

        
            //---------------
            
            if( car3.getPosition().distance( car4.getPosition() ) < area ){
                car3.color = ofColor(255,0,0);
                car4.color = ofColor(255,0,0);
                
                car3.addRepulsionForce( car4.getPosition(), area,  0.1 );
                car4.addRepulsionForce( car3.getPosition(), area, 0.1 );
            }else{
                car3.color = ofColor(0,255,0);
                car4.color = ofColor(0,255,0);
            }

            //---------
               
                if( car4.getPosition().distance( car5.getPosition() ) < area ){
                    car4.color = ofColor(255,0,0);
                    car5.color = ofColor(255,0,0);
                    
                    car4.addRepulsionForce( car5.getPosition(), area,  0.1 );
                    car5.addRepulsionForce( car4.getPosition(), area, 0.1 );
                }else{
                    car4.color = ofColor(0,255,0);
                    car5.color = ofColor(0,255,0);
                }
    
        //-----------------------
                    
                   
        if( car1.getPosition().distance( car5.getPosition() ) < area ){
                        car1.color = ofColor(255,0,0);
                        car5.color = ofColor(255,0,0);
                        
                        car1.addRepulsionForce( car5.getPosition(), area,  0.1 );
                        car5.addRepulsionForce( car1.getPosition(), area, 0.1 );
        }else{
                car1.color = ofColor(0,255,0);
                car5.color = ofColor(0,255,0);
        
                    }
    
    // update physics
    car1.update();
    car2.update();
    car3.update();
    car4.update();
    car5.update();
    
    if( car1.getPosition().distance(dest1) < 5){
        dest1 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    }
    
    if( car2.getPosition().distance(dest2) < 5){
        dest2 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    }
                    
    if( car3.getPosition().distance(dest3) < 5){
        dest3 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    }
                    
    if( car4.getPosition().distance(dest4) < 5){
        dest4 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    }
                    
                    
    if( car5.getPosition().distance(dest5) < 5){
    dest5 = ofPoint( ofRandomWidth(), ofRandomHeight() );
    }
    
}

                    
            

//-------------------------------------------------------------
void ofApp::draw(){
    
//    ofBackground(0);
    
    ofSetColor( car1.color );
    ofDrawCircle( dest1, 4 );
    car1.draw();
    
    ofSetColor( car2.color );
    ofDrawCircle( dest2, 4 );
    car2.draw();
    
    ofSetColor( car3.color );
    ofDrawCircle( dest3, 4 );
    car3.draw();
    
    ofSetColor( car4.color );
    ofDrawCircle( dest4, 4 );
    car4.draw();
    
    ofSetColor( car5.color );
    ofDrawCircle( dest5, 4 );
    car5.draw();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
