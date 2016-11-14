#include "ofApp.h"

//From tutorial:
//http://openframeworks.cc/ofBook/chapters/generativemesh.html


//--------------------------------------------------------------
void ofApp::setup(){
    
    
     gui.setup(meshParameters);
    
   
    
    meshParameters.add(conn.set("connection", 20, 1, 100));
    meshParameters.add(intensity.set("intensity", 10, 1, 100));
    meshParameters.add(color.set("color", 1, 0, 1));
    
//     gui.add(color.setup("color", 60, 10, 300));
    
    
    
    image.load("afrogalaxy.jpg");
    image.resize(222, 227);
    
    //    mesh.setMode(OF_PRIMITIVE_POINTS);
    mesh.setMode(OF_PRIMITIVE_LINES);
    
    //    mesh.enableColors();
    mesh.enableIndices();
    
    
    float intensityThreshold = intensity;
    int w = image.getWidth();
    int h = image.getHeight();
    for (int x=0; x<w; ++x) {
        for (int y=0; y<h; ++y) {
            ofColor c = image.getColor(x, y);
            float intensity = c.getLightness();
            if (intensity >= intensityThreshold) {
                float saturation = c.getSaturation();
                float z = ofMap(saturation, 0, 255, -100, 100);
                // why do we have to map sat?
                
                
                
                ofVec3f pos(x*4, y*4, z); // z is the variable the represents the change in saturation
                
                
                mesh.addVertex(pos);
                
                
                // When addColor(...), the mesh will automatically convert
                // the ofColor to an ofFloatColor
                
                
                mesh.addColor(c);
                
            }
        }
    }
    
    // Let's add some lines!
    
    
    float connectionDistance = conn;
    
    int numVerts = mesh.getNumVertices();
    for (int a=0; a<numVerts; ++a) {
        ofVec3f verta = mesh.getVertex(a);
        for (int b=a+1; b<numVerts; ++b) {
            ofVec3f vertb = mesh.getVertex(b);
            float distance = verta.distance(vertb);
            if (distance <= connectionDistance) {
                // In OF_PRIMITIVE_LINES, every pair of vertices or indices will be
                // connected to form a line
                mesh.addIndex(a);
                mesh.addIndex(b);
            }
        }
    }
    


}

//--------------------------------------------------------------
void ofApp::update(){
    
    


}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofColor centerColor = ofColor(85, 78, 68);
    ofColor edgeColor(0, 0, 0);
    ofBackgroundGradient(centerColor, edgeColor, OF_GRADIENT_CIRCULAR);
    
    easyCam.begin();
    ofPushMatrix();
    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2);
    mesh.draw();
    ofPopMatrix();
    easyCam.end();
    
    
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
