/*
    Suppose there are two roads,

    Road 1: ABC Road, represented by equation 5x + y - 3 = 0
    Road 2: XYZ Road, represented by equation 2x + 3y + 1 = 0

    These two roads meet each other at a chowk, called 123 Chowk.
    Determine at which angle , these two roads meet each other at chowk.
    What you have to do :

    Create a Program which determines angle at which these roads meet at 123 Chowk.
*/

/*
    prototype of find_angle function is : 

    double find_angle(float x1, float y1, float x2, float y2);
    (x1, y1) (x2, y2) these are the x y coordinates of corresponding equations like
    1) 5x + y - 3 = 0   x1 = 5, y1 = 1
    2) 2x + 3y + 1 = 0  x2 = 2, y2 = 3
*/

#include<stdio.h>
#include<conio.h>
#include"library.h"

int main()
{
    double angle_at_chowk;

    /*
        We all know that, there is no function named find_angle exists, 
        so you have to created a library for that. -> library.h has its declaration
    */

    // passing x and y values of equation i.e x1, y1, x2, y2
    angle_at_chowk = find_angle(5, 1, 2, 3);
    printf("Angle at which these roads meets at 123 Chowk: %.lf deg\n",angle_at_chowk);

    getch();
    return 0;
}
