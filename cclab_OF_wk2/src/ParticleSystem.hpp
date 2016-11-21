//
//  ParticleSystem.hpp
//  OF Week3 Inclass
//
//  Created by Aaron Lehr on 11/14/16.
//
//

#pragma once
#include "ofMain.h"
#include "Particle.hpp"

class ParticleSystem{
public:
    ParticleSystem(ofVec2f position);
    void update(ofVec2f force);
    void draw();
    
    
    vector<Particle>    mParticleList;
    ofVec2f             mPosition;
    int                 mEmitRate;
    const int           SIZE_LIMIT = 500;
    bool                mIsAddingParticles;
    
};

