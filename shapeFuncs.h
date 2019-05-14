#ifndef BOXFUNCS_H
#define BOXFUNCS_H

#include <string>
using std::string;
#include "shapes.h"


string coordinateToString(Coordinate p, int precision=3);
string boxToString(Box b, int precision=3);
double distanceBetween(Coordinate p, Coordinate q);
bool coordinatesApproxEqual(Coordinate coord1, Coordinate coord2, double tolerance=0.0001);
bool boxesApproxEqual(Box b1, Box b2, double tolerance=0.0001);
void initCoordinate(struct Coordinate &p, double xVal, double yVal);
void initBox(struct Box &b, double ulx, double uly, double w, double h);

double areaOfBox(Box b);


#endif // BOXFUNCS_H
