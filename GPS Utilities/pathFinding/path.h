#ifndef PATH_H
#define PATH_H

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;

#define PI 3.1415926535
#define R 6371000

typedef struct
{
        Coordinate *from;
        Coordinate *to;
        double magnitude;
        double angle;
} directions;

double RADIANS(double num);

double distance(double lat1, double lon1, double lat2, double lon2);

double bearing(double lat1, double lon1, double lat2, double lon2);

double findHeading(double heading, double bearing);

double angle_change(double dis);

#endif