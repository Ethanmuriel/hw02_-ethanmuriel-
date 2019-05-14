#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
#include <cmath>

using namespace std;


#include "shapes.h"
#include "shapeFuncs.h"
#include "utility.h"

// Compute distance between two coordinates

double distanceBetween(Coordinate p, Coordinate q) {
  double distance = 0;
  distance = sqrt(pow((q.x - p.x),2.0) + pow((q.y - p.y),2.0));
  // HINTS: The distance formula is something you hopefully remember
  //   from H.S. algebra, but if not, Wikipedia is your friend.
  //   The sqrt function is available when you use #include <cmath>, 
  //   and pow(expresssion,2.0) will return expression squared.
  // You can access p.x, p.y, q.x and q.y and use those in your formula.
  return distance;
}

 
// The function initCoordinate below illustrates passing a struct by coordinateer.
// Inside this function:
//  p   is the address of the struct Coordinate
// (*p) refers to the struct Coordinate itself (we dereference the coordinateer)
// (*p).x refers to the x member of the coordinate
// (*p).y refers to the y member of the coordinate
// p->x is a shortcut for (*p).x ( -> means deference AND THEN go inside the struct)
// p->y is a shortcut for (*p).y ( -> means deference AND THEN go inside the struct)


void initCoordinate(struct Coordinate &p, double xVal, double yVal) {
	p.x = xVal;
	p.y = yVal;
  //return; //@@@ for a void function, the stub is just a bare return that does nothing
}


string coordinateToString(Coordinate p, int precision) {
  ostringstream oss;
  oss << setprecision(precision); // set precision to 3 decimal places
  oss << "(" << p.x << "," << p.y << ")";
  return oss.str();
}

string boxToString(Box b, int precision) {
  
  // SAMPLE FORMAT: ul=(3.4,-5),w=5,h=7
  ostringstream oss;
  oss << setprecision(precision); 
  oss << "ul=(" << b.ul.x << "," << b.ul.y << ")," << "w=" << b.width << "," << "h=" << b.height;
  return oss.str();
  
}
 


bool coordinatesApproxEqual(Coordinate coord1, 
		       Coordinate coord2, 
		       double tolerance) {
  // Two coordinates are approximately equal if the distance between them
  // is less than our tolerance.  (If we want to test for 
  // exact equality, we can pass in a value of zero.)

  return distanceBetween(coord1,coord2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance) {
 if (coordinatesApproxEqual(b1.ul, b2.ul, tolerance) && approxEquals(b1.width, b2.width, tolerance) && approxEquals(b1.height, b2.height, tolerance)){
		  return true;
  } else{
  	return false;
  }
 }


// Now write a function to initialize a box.
// You'll need to initialize the upper left x and y,
// the width and the height.
// Note: there is a struct Coordinate inside the struct Box.
// So here's a clue: For the x value, use (*b).ul.x or (b->ul).x 
//  The y value is similar.
// There is also a way to "reuse" initCoordinate, if you are feeling 
//  confident in your understanding of coordinateers and structs.

void initBox(struct Box &b, double ulx, double uly, double w, double h)
{
  b.width = w;
  b.height = h;
  b.ul.x = ulx;
  b.ul.y = uly;
}


double areaOfBox(Box b) {
  return (b.height * b.width);  
}
