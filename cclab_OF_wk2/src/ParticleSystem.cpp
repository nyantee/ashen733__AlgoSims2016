//
//  ParticleSystem.cpp
//  OF Week3 Inclass
//
//  Created by Aaron Lehr on 11/14/16.
//
//

#include "ParticleSystem.hpp"
//--------------------------------------------
ParticleSystem::ParticleSystem(ofVec2f position)
{
    mPosition = position;
    mEmitRate = 10;
}

//--------------------------------------------------------------
void ParticleSystem::update(ofVec2f force)
{
    
    if (mParticleList.size() < SIZE_LIMIT){
        // pushing particles into the array
        for (int i = 0; i < mEmitRate; i++) {
            Particle particle(mPosition);
            mParticleList.push_back(particle);
        }
    }
    
    for (int i = 0; i < mParticleList.size(); i++) {
        
        if (mParticleList[i].mLifeSpan > 0) {
            
            // calculating the distance between center and particle position
            float distance = (mParticleList[i].mPosition - mPosition).length();
            
            mParticleList[i].resetForces();
            // force in here is passed from ofapp
            mParticleList[i].applyForce(force);
            // this apply to the decreasing velocity multiplier to the particle
            float velocityMultiplier = ofMap(distance, 0, 200, 4, 1);
            mParticleList[i].update(velocityMultiplier);
            
        }
        
    }
    
}


//--------------------------------------------------------------
void ParticleSystem::draw()
{
    for (int i = 0; i < mParticleList.size(); i++) {
        mParticleList[i].draw();
    }
}


