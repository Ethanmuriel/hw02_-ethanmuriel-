#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"


int main() {
  struct Coordinate coord1,coord2;

  coord1.x = 6.0;  coord1.y = 3.0;
  coord2.x = 7.0;  coord2.y = 11.0;

  // coord1 should be equal to itself
  assertTrue(coordinatesApproxEqual(coord1,coord1),"coordinatesApproxEqual(coord1,coord1)");

  // coord1 and coord2 should not be equal: note the ! meaning "not"
  assertFalse(coordinatesApproxEqual(coord1,coord2), "coordinatesApproxEqual(coord1,coord2)");

  assertFalse(coordinatesApproxEqual(coord2,coord1), "assertFalse(coordinatesApproxEqual(coord2,coord1))");

}

