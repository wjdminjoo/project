//
//  Player.cpp
//  PacMan
//
//  Created by MinJu Jeong on 2018. 10. 6..
//  Copyright © 2018년 MinJu Jeong. All rights reserved.
//

#include "Player.hpp"



void Player::KeyPress(){
    nSelect = getch();
    
    if((nSelect == 224)){
        nSelect = getch();
        switch(nSelect){
            case 72:
        if(StageMatrix[pX - 1][pY] != WALL){
            if(StageMatrix[pX-1][pY] == powerPill){
                curTime = time(&curTime);
                eatSuperPill = true;
            }
            StageMatrix[pX][pY] = BLANK;
            StageMatrix[pX -1][pY] = UP;
            pX--;
            break;
        }
            case 80:
                if(StageMatrix[pX + 1][pY] != WALL){
                    if(StageMatrix[pX+1][pY] == powerPill){
                        curTime = time(&curTime);
                        eatSuperPill = true;
                    }
                    StageMatrix[pX][pY] = BLANK;
                    StageMatrix[pX +1][pY] = DOWN;
                    pX++;
                    break;
                }
            case 75:
                if(StageMatrix[pX][pY-1] != WALL){
                    if(StageMatrix[pX][pY-1] == powerPill){
                        curTime = time(&curTime);
                        eatSuperPill = true;
                    }
                    StageMatrix[pX][pY] = BLANK;
                    StageMatrix[pX ][pY-1] = LEFT;
                    pY--;
                    break;
                }
            case 77:
                if(StageMatrix[pX][pY+1] != WALL){
                    if(StageMatrix[pX][pY+1] == powerPill){
                        curTime = time(&curTime);
                        eatSuperPill = true;
                    }
                    StageMatrix[pX][pY] = BLANK;
                    StageMatrix[pX ][pY+1] = RIGHT;
                    pY++;
                    break;
                }
        }
    }
    
    
}
