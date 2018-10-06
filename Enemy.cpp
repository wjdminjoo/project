//
//  Enemy.cpp
//  PacMan
//
//  Created by MinJu Jeong on 2018. 10. 6..
//  Copyright © 2018년 MinJu Jeong. All rights reserved.
//

#include "Enemy.hpp"


void Enemy::GhostMove(){
    
    // 유령이 위로 움직일 때
    if(player->setSuper(true)){
        if(player->PlayerX() > ghostX){
            if(!MoveUp()){
                
                }
            }
    // 유령이 밑으로 움직일 때
    else if(player->PlayerX() < ghostX){
        if(!MoveDown()){
            
            }
        }
    if(player->PlayerY() > ghostY){
        if(!MoveLeft()){
            
            }
        }
    if(player->PlayerY() < ghostY){
        if(!MoveRight()){
            
            }
        }
    }
    else{
        if(player->PlayerX() < ghostX){
            if(!MoveUp()){
                
            }
        }
        // 유령이 밑으로 움직일 때
        else if(player->PlayerX() > ghostX){
            if(!MoveDown()){
                
            }
        }
        if(player->PlayerY() < ghostY){
            if(!MoveLeft()){
                
            }
        }
        if(player->PlayerY() > ghostY){
            if(!MoveRight()){
                
            }
        }
    }
    // 고스트를 먹게 된다면 고스트를 초기화 해준다.
    if(player->PlayerX() == ghostX && player->PlayerY() == ghostY && player->getSuper()){
        StageMatrix[ghostX][ghostY] = player->MoveUp();
        ghostX = 10;
        ghostY = 6;
        StageMatrix[10][6] = Ghost;
    }
    // 고스트에게 잡히면 바로 끝나도록 한다.
    else if(player->PlayerX() == ghostX && player->PlayerY() == ghostY ){
        system("cls");
        exit(0);
        
    }
        
}


bool Enemy::MoveUp(){
    char NextUp = StageMatrix[ghostX-1][ghostY];
    
    if(NextUp != WALL){
        if(NextUp == pointPill || NextUp == 117){
            StageMatrix[ghostX-1][ghostY] = Ghost;
            
            StageMatrix[ghostX][ghostY] = ghostTrail;
            ghostX--;
        }
        else{
            StageMatrix[ghostX][ghostY] = BLANK;
            StageMatrix[ghostX-1][ghostY] = Ghost;
            ghostX--;
        }
        return true;
    }
    else return false;
    
}

bool Enemy::MoveDown(){
    char NextDown = StageMatrix[ghostX+1][ghostY];
    
    if(NextDown != WALL){
        if(NextDown == pointPill || NextDown == 117){
            StageMatrix[ghostX+1][ghostY] = Ghost;
            StageMatrix[ghostX][ghostY] = ghostTrail;
            ghostX++;
        }
        else{
            StageMatrix[ghostX][ghostY] = BLANK;
            StageMatrix[ghostX+1][ghostY] = Ghost;
            ghostX++;
        }
        return true;
    }
    else return false;
    
}

bool Enemy::MoveLeft(){
    char MoveLeft = StageMatrix[ghostX][ghostY-1];
    
    if(MoveLeft != WALL){
        if(MoveLeft == pointPill || MoveLeft == 117){
            StageMatrix[ghostX][ghostY-1] = Ghost;
            
            StageMatrix[ghostX][ghostY] = ghostTrail;
            ghostY--;
        }
        else{
            StageMatrix[ghostX][ghostY] = BLANK;
            StageMatrix[ghostX][ghostY-1] = Ghost;
            ghostY--;
        }
        return true;
    }
    else return false;
    
}

bool Enemy::MoveRight(){
    char MoveRight = StageMatrix[ghostX][ghostY+1];
    
    if(MoveRight != WALL){
        if(MoveRight == pointPill || MoveRight == 117){
            StageMatrix[ghostX][ghostY+1] = Ghost;
            
            StageMatrix[ghostX][ghostY] = ghostTrail;
            ghostY++;
        }
        else{
            StageMatrix[ghostX][ghostY] = BLANK;
            StageMatrix[ghostX][ghostY+1] = Ghost;
            ghostY++;
        }
        return true;
    }
    else return false;
    
}



