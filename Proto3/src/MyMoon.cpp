//
//  MyMoon.cpp
//  orbit
//
//  Created by Regina Flores on 9/22/16.
//
//


#include "MyMoon.hpp"

//void MyMoon::levels(int rounds){
//    
//    
//   rounds = num;
//
//}


void MyMoon::set(float _intAngle){

    num = ofRandom(20,40);
    
    
    for(int i =0; i < num; i++){
        
        
        
        
        //radius = _dist -= (i*10);
        move = _intAngle;
        
        
    }
    
}


void MyMoon::update(float _step, ofVec3f _center){
    
     move+= _step;

    for(int i =0; i< num; i++){
   
    
        posx = _center.x += move;
        posy = _center.y += move;
       
        
        //was angle chaning everytime u set in the array
        //would change the angle and then update withthe new angle everytine
    }

    
  
    
   // if(x>1000 || x<0)
    

}

void MyMoon::draw(float size){
    
    
    
      for(int i=0; i<num; i++){
          
          
           
    
    ofPushMatrix();
    
    ofPoint zShift( 0, 0, 30);
    ofTranslate(zShift);
    
    
    ofSetLineWidth(2);
    
    ofNoFill();
    
    ofSetColor(255, 10*i, 0);
          
          
          
    ofCircle(posx, posy, size + (i*(ofRandom(5,10))));
                   
         
          //ofDrawEllipse(posx, posy, i*(ofRandom(5,10)), i*(ofRandom(5,10)));
    
    ofPushMatrix();
   
}
    
    std::cout << "move::" << move << endl;
    
}



//
//float MyMoon::getRings(){
//    
//   return num;


    
float MyMoon::getYPosition(){
    
    return posy;


}

float MyMoon::getXPosition(){
    
    return posx;
    
    
}


