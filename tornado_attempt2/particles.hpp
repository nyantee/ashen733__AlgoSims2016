//
//  particles.hpp
//  tornado_attempt2
//
//  Created by Nyantee Asherman on 12/1/16.
//
//

#ifndef particles_hpp
#define particles_hpp

//#include <stdio.h>
#include "ofMain.h"

#endif /* particles_hpp */

class Particles {
    
    
public:
    
    Particles();
    
    void setup();
    void update();
    void draw(float radius, float ypos, float rotgen, float rotx, float roty, float rotz);
    
    
    ofPoint position;
    
    ofPoint velocity;
    
    float circle;
    float move;
    
    float angle;
    
    float step;
    
    float moveSin;
    
    
    
    
    

    
    
};
