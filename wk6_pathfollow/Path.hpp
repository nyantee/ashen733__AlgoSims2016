//
//  Path.hpp
//  wk6_pathfollow
//
//  Created by Nyantee Asherman on 10/13/16.
//
//


#pragma once

#include "ofMain.h"

class Path{
public:
    Path();
    void display();
    ofPoint start;
    ofPoint end;
    float radius;
};

