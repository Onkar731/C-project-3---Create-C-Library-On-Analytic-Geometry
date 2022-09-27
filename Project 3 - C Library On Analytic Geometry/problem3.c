/*
    Looking at an above image, actually that image is zoomed up version of pdf file.

    As we see there is ‘A’ shaped character, it has three vertices which has coordinates

    (20.077,11.598) , (26.526, 90.138) , (23.674, 32.579).

    We have to cover the area under ‘A’ shaped character and colour it black.
    Calculate area under ‘A’ shaped character
*/

/*
    prototype of find_area function is : 

    double find_area(double x1, double y1, double x2, double y2, double x3, double y3);
    (x1, y1) (x2, y2) (x3, y3) these are the coordinates of corresponding vertices
*/

#include<stdio.h>
#include<conio.h>
#include"library.h"

int main()
{

    double area_under_A;
    /*
        We all know that, there is no function named find_distance exists,
        so you have to include this function in your library.
    */

    area_under_A = find_area(20.077, 11.598, 26.526, 90.138, 23.674, 32.579);
    printf("Area to be coloured black: %.2lf sq.units\n",area_under_A);

    getch();
    return 0;
}

