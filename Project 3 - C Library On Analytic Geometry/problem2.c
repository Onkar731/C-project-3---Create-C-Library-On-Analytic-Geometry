/*
    Saurabh Sir stays in Bhopal,
    Prateek Sir stays in Bangalore.

    Using GPS:
    Latitude and Longitude values of Bhopal as 23.259933 N, 77.412613 E.
    Latitude and Longitude values of Bangalore as 12.9716 N, 77.5946 E.

    Calculate distance between Saurabh Sir and Prateek Sir.
*/

/*
    prototype of find_distance function is : 

    double find_distance(double lat1, double long1, double lat1, double long2);
    (latitude1, longitude1) (latitude2, longitude2) these are the coordinate values of a person
*/

#include<stdio.h>
#include<conio.h>
#include"library.h"

int main()
{
    double distance;

    /*
        We all know that, there is no function named find_distance exists,
        so you have included this function in our library.
    */

    distance = find_distance(23.259933, 77.412613, 12.9716, 77.5946);
    printf("Distance Between Saurabh Sir and Prateek Sir: %.0lf KM\n",distance);

    getch();
    return 0;
}