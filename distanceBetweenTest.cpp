#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"

int main() {
  struct Coordinate coord1,coord2,coord3,coord4,coord5;

  coord1.x = 6.0;  coord1.y = 3.0;
  coord2.x = 7.0;  coord2.y = 11.0;
  coord3.x = 0.0;  coord3.y = 0.0;
  coord4.x = 3.0;  coord4.y = 0.0;
  coord5.x = 3.0;  coord5.y = 4.0;
		 
  assertEquals(8.0623, distanceBetween(coord1,coord2),"distanceBetween(coord1,coord2)");
  assertEquals(8.0623, distanceBetween(coord2,coord1),"distanceBetween(coord2,coord1)");

  // These three coordinates should form a 3,4,5 triangle

  assertEquals(3.0, distanceBetween(coord3,coord4),"distanceBetween(coord3,coord4)");
  assertEquals(4.0, distanceBetween(coord4,coord5),"distanceBetween(coord4,coord5)");
  assertEquals(5.0, distanceBetween(coord5,coord3),"distanceBetween(coord5,coord3)");
  

  return 0;
}
