//
//  getkey.cpp
//  PacMan
//
//  Created by MinJu Jeong on 2018. 10. 6..
//  Copyright © 2018년 MinJu Jeong. All rights reserved.
//


#include <termios.h>
#include <unistd.h>

int getch(void)
{
    //struct termios oldt, newt;
    //int ch;
    //tcgetattr( STDIN_FILENO, &oldt );
    //newt = oldt;
    //newt.c_lflag &= ~( ICANON | ECHO );
    //tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    //ch = getchar();
    //tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
   return 0;
}
