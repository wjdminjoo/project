//
//  Player.hpp
//  PacMan
//
//  Created by MinJu Jeong on 2018. 10. 6..
//  Copyright © 2018년 MinJu Jeong. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "arrayMap.hpp"
#include "getkey.cpp"

const int RIGHT = 77;
const int LEFT = 75;
const int UP = 72;
const int DOWN = 80;
class Player : public arrayMap{
private:
    time_t curTime, oldTime;
    bool eatSuperPill = false;
    int pX = 0;
    int pY = 10;
    
    //방향키
    int nSelect = 0;
public:
    Player();
    ~Player();
    
    bool getSuper(){return eatSuperPill;}
    int PlayerX(){return pX;}
    int PlayerY(){return pY;}
    int MoveRight(){return RIGHT;}
    int MoveLeft(){return LEFT;}
    int MoveUp(){return UP;}
    int MoveDown(){return DOWN;}
    
    bool setSuper(bool e){return eatSuperPill = e;}
    
    void KeyPress();
    
};



#endif /* Player_hpp */
