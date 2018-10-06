//
//  Enemy.hpp
//  PacMan
//
//  Created by MinJu Jeong on 2018. 10. 6..
//  Copyright © 2018년 MinJu Jeong. All rights reserved.
//

#ifndef Enemy_hpp
#define Enemy_hpp

#include <iostream>
#include "arrayMap.hpp"
#include "Player.hpp"

class Enemy : public arrayMap{
private:
    int ghostX = 10;
    int ghostY = 6;
    Player* player;
public:
    char ghostCur = StageMatrix[ghostX][ghostY];
    char ghostTrail = ghostCur[&ghostX][&ghostY];
    
    
    void GhostMove();
    bool MoveUp();
    bool MoveDown();
    bool MoveRight();
    bool MoveLeft();
};


#endif /* Enemy_hpp */
