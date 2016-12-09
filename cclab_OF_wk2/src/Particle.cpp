//
//  Particle.cpp
//  cclab_OF_wk2
//
//  Created by Nyantee Asherman on 11/15/16.
//
//


#include "Particle.hpp"

Particle :: Particle (ofVec2f position){
    
    
    
    
     mShape = (1,1);
     mHape = (1,-1);
    
    mPosition = position;
    mVelocity = ofVec2f(sin(ofRandom(-2.f , 2.f)),cos((ofRandom(-2.f , 2.f))));
                        mAcceleration = ofVec2f(0);
                        mLifeSpan = INITIAL_LIFE_SPAN;
    
    
    
    
    
}

//----------------------------------


void Particle:: resetForces(){
    
    mAcceleration *= 0;
    

                            
                        }

//----------------------------------

void Particle::applyForce(ofVec2f force){
    
        mAcceleration += force;
                            
                        }


//----------------------------------

void Particle::update(float multiplier){
                            
        mVelocity += mAcceleration;
        mPosition += mVelocity * multiplier;
                

    


        if (mLifeSpan>0){
            mLifeSpan -= 1.f;
                        }
    
}
                        
//----------------------------------
    
                        void Particle::draw(){
                            
                            if (mLifeSpan> BLINKING_LIFE_SPAN){
                                
                                ofSetColor(20,200,200);
                                
                            } else if (mLifeSpan<= BLINKING_LIFE_SPAN){
                                
                                ofSetColor(ofRandom(0,mLifeSpan/INITIAL_LIFE_SPAN)*255,200,200);
                        }
                            
                            
                            
                            ofDrawCircle(mPosition, 4* ofMap(mLifeSpan, 0,255.f, 0, 1.f));
                            
                            
                        
                            
                        }
                    














