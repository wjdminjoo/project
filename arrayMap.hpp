//
//  arrayMap.hpp
//  PacMan
//
//  Created by MinJu Jeong on 2018. 10. 6..
//  Copyright © 2018년 MinJu Jeong. All rights reserved.
//

#ifndef arrayMap_hpp
#define arrayMap_hpp

#include <iostream>


const int WALL = 1;
const int pointPill = 2;
const int powerPill = 3;
const int Ghost = 4;
const int BLANK = 0;

const int MAXROW = 20;
const int MAXCOL = 20;

class arrayMap{
private:
  
public:
    arrayMap(){}
    ~arrayMap(){}
    
    unsigned char StageMatrix[MAXROW][MAXCOL] ={
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 1, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 1, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 1, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 2, 2, 2, 1, 1, 1, 2, 2, 1},
        {0, 2, 2, 2, 1, 0, 1, 2, 2, 1},
        {1, 2, 2, 2, 1, 0, 1, 2, 2, 1},
        {1, 2, 2, 2, 1, 0, 1, 2, 2, 1},
        {1, 2, 2, 2, 2, 1, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 0, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
    
    

};
#endif /* arrayMap_hpp */
