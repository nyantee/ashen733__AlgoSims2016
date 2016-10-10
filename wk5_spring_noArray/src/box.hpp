//
//  box.hpp
//  wk5_spring_noArray
//
//  Created by Nyantee Asherman on 10/7/16.
//
//

#ifndef box_hpp
#define box_hpp

#include <ofMain.h>
#include <main.cpp>

#endif /* box_hpp */


class box{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void applyForce(ofVec2f force);
    float k;
    float restLength;
    
    ofVec2f acc, vel;
    ofVec2f anchor, ball;
    
    //to make the ball dragable
    bool dragging;
    float mouseY;
    
    
    
};

