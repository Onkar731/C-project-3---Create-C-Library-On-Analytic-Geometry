#include<math.h>
#include"library.h"

double find_angle(float x1, float y1, float x2, float y2)
{
    double angle = (atan(((x1*y2 - x2*y1) * (y1*y2)) / ((y1*y2) * (y1*y2 + x1*x2))));
    if(angle < 0)
        angle = -angle;
    
    return angle * 180 / 3.14;
    /*

        double t1 = x1*y2 - x2*y1;
        double t2 = y1*y2;
        double t3 = t2 + x1*x2;
        printf("%lf/%lf", (t1*t2), (t2*t3));
        return ((atan((t1*t2) / (t2*t3))) * 180 / 3.14);
        formula - (t1 * t2) / (t2 * t3);

    */
}

double find_distance(double lat1, double long1, double lat2, double long2)
{
    double P = 0.017444; // PI/180
    double a = sin((lat2-lat1) * P /2) * sin((lat2-lat1) * P /2) +

               cos(lat1 * P) * cos(lat2 * P) *

               sin((long2-long1) * P /2) * sin((long2-long1) * P /2);

    return (6371 * (2 * atan2(sqrt(a),sqrt(1-a)))) ; // in km

    /*

        a = sin²(Δφ/2) + cos φ1 ⋅ cos φ2 ⋅ sin²(Δλ/2)

        c = 2 * atan2( √a, √(1−a) )

        d = R * c

    */
}

double find_area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double area = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
    if(area < 0)
        area = -area;
    
    return area/2;

    /*
        Calculating area using determinant method
        Formula is : Area = 1/2 * |x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)|;
    */
}