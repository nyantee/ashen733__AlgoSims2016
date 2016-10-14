//
//  Car.cpp
//  wk6_pathfollow
//
//  Created by Nyantee Asherman on 10/13/16.
//
//
#include "Car.hpp"

void Car::setInit(ofVec2f l, float ms, float mf){
    location=l;
    r=4.0;
    maxspeed = ms;
    maxforce = mf;
    acceleration = ofVec2f(0, 0);
    velocity = ofVec2f(maxspeed, 0);
    
    ski.load("images/ski2.jpg");
 
}

void Car::run(){
    update();
    borders();
    render();
}

void Car::follow(Path p){
    ofVec2f predict = velocity;
    predict.normalize();
    predict*=25;
    ofVec2f predictLoc = location+predict;
    
    // Look at the line segment
    ofVec2f a = p.start;
    ofVec2f b = p.end;
    
    // Get the normal point to that line
    ofVec2f normalPoint = getNormalPoint(predictLoc, a, b);
    
    // Find target point a little further ahead of normal
    ofVec2f dir = b - a;
    dir.normalize();
    dir*=10;  // This could be based on velocity instead of just an arbitrary 10 pixels
    ofVec2f target = normalPoint+dir;
    
    // How far away are we from the path?
    float distance = predictLoc.distance(normalPoint);
    // Only if the distance is greater than the path's radius do we bother to steer
    if (distance > 0) {
        seek(target);
    }
}

ofVec2f Car::getNormalPoint(ofVec2f p, ofVec2f a, ofVec2f b){
    ofVec2f ap = p-a;
    // Vector from a to b
    ofVec2f ab = b-a;
    ab.normalize(); // Normalize the line
    // Project vector "diff" onto line by using the dot product
    ab*=ap.dot(ab);
    ofVec2f normalPoint = a+ab;
    return normalPoint;
}


void Car::update(){
    // Update velocity
    velocity+=acceleration;
    // Limit speed
    velocity.getLimited(maxspeed);
    location+=velocity;
    // Reset accelertion to 0 each cycle
    acceleration*=0;
}

void Car::applyForce(ofVec2f force){
    acceleration+=force;
}



void Car::seek(ofVec2f target){
    ofVec2f desired = target-location;  // A vector pointing from the location to the target
    
    // If the magnitude of desired equals 0, skip out of here
    // (We could optimize this to check if x and y are 0 to avoid mag() square root
    if (desired.length() == 0) return;
    
    // Normalize desired and scale to maximum speed
    desired.normalize();
    desired*=maxspeed;
    // Steering = Desired minus Velocity
    ofVec2f steer = desired-velocity;
    steer.getLimited(maxforce);  // Limit to maximum steering force
    
    applyForce(steer);
}


void Car::render(){
//    // Draw a triangle rotated in the direction of velocity
//    //    ofVec2f Orig=ofVec2f(0,0);
////    float theta = velocity.angleRad(ofVec2f(0,0))+ofDegToRad(90);
//    
//    ofSetColor(175,175,175);
//    ofFill();
//    ofSetColor(0,0,0);
//    
//    ofPushMatrix();
//    ofTranslate(location.x, location.y);
////    ofRotate(theta);
//    //
//    //    ofBeginShape();
//    //    ofVertex(0, -r*2);
//    //    ofVertex(-r,r*2);
//    //    ofVertex(r,r*2);
//    //    ofEndShape();
//    ofDrawTriangle(0, -r*2, -r, r*2, r, r*2);
//    
//    ofPopMatrix();
//}
    
   
    
    ski.draw(ofVec2f(location),100,100);
    
 
    
}


void Car::borders(){
    if (location.x < -r) {
        location.x = ofGetWidth()+r;
    }
    //if (location.y < -r) location.y = height+r;
    if (location.x > ofGetWidth()+r) {
        location.x = -r;
    }
    //if (location.y > height+r) location.y = -r;
}

