//
//  MyBall.cpp
//  BouncingBall
//
//  Created by Regina Flores on 9/8/16.
//
//EXERCISE A

#include "MyBall.hpp"

//Constructor
MyBall::MyBall(){
    
    
    
    
   // float n = noise(t);
   // Using map() to customize the range of Perlin noise
    //float x = map(n,0,1,0,width);
    //ellipse(x,180,16,16);
    
   // t += 0.01;
    
    //Dot Notation:
    vel.x = 5;
    vel.y = ofRandom(-4,4);
    
    
    pos.x = 0;
    pos.y = ofGetHeight()/2;
}

void MyBall::update(){
    
    
    float noise = ofNoise(pos.x * 0.005, pos.y*0.005, ofGetElapsedTimef() * 0.1) * 15.0;
    
    //x += 1 ===== x = x + 1
    pos.x +=  cos(noise);
    pos.y += sin(noise);
    
    pos.y += vel.y;
    pos.x += vel.x;
    
    //Bounding Conditions
    if(pos.x < 0 || pos.x > ofGetWidth()){
        vel.x = vel.x * -1;
        
    }
    
    if( pos.y < 0 || pos.y > ofGetHeight()){
        vel.y = vel.y * -1;
    }
    
}

void MyBall::draw(float size){
    
    
    
    
    //    ofSetColor(255, 0, 0);
    //    ofCircle(position.x, position.y, 10);
    ofDrawCircle(pos, size++);
    
    
  
    
    
}









