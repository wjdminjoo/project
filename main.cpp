//
//  main.cpp
//  PacMan
//
//  Created by MinJu Jeong on 2018. 9. 27..
//  Copyright © 2018년 MinJu Jeong. All rights reserved.
//


#include "arrayMap.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "introScreen.hpp"
int main(int argc, const char * argv[]) {
    arrayMap* m_stageField = new arrayMap;
    Player* m_player = new Player;
    Enemy* m_enemy = new Enemy;
    introScreen* m_intro = new introScreen;
    
    m_intro->Screen();
    
    
    
    return 0;
}
