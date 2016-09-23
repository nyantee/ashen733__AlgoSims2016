//
//  MyObj.cpp
//  MyObject
//
//  Created by Regina Flores on 9/1/16.
//
//

#include "MyObj.hpp"

void MyObj::setSrc(float _x, float _y){

    src.set(_x, _y);
    

}

void MyObj::setDst(float _x, float _y){

    dst.set(_x, _y);

}

//Here is formulas for using power functions:
//pct = powf(num,exp); myPoss = (1-pct) * a + pct * b;

void MyObj::powUpdatePct(float _pct, float _shaper){
    
    float Powpct = powf(_pct, _shaper);
    pos = dst * Powpct + src * (1.0 - Powpct);

}

void MyObj::draw(){
    
    if (ofGetFrameNum() % 50 == 0){

   
   
    
    ofSetColor(255,0, 0);
    ofDrawRectangle(pos,20,20);
    //does ofCircle know to take pos as a position instead of x and y? is that built into OF
        
    }
     ofSetColor(255, 255, 255, 200);
    ofLine(src, dst);

}








