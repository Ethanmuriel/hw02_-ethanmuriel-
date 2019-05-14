#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Coordinate coord1,coord2;

  initCoordinate(&coord1,3.0,4.0);  
  assertEquals("(3,4)", coordinateToString(coord1), "coordinateToString(coord1)");

  initCoordinate(&coord2,3.14159,6.2831853071);
  assertEquals("(3.14,6.28)", coordinateToString(coord2), "coordinateToString(coord2)");
  assertEquals("(3,6)", coordinateToString(coord2,1), "coordinateToString(coord2,1)");
  assertEquals("(3.142,6.283)", coordinateToString(coord2,4), "coordinateToString(coord2,4)");
  assertEquals("(3.1416,6.2832)", coordinateToString(coord2,5), "coordinateToString(coord2,5)");

		   
  return 0;
}
