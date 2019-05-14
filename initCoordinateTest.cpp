#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Coordinate coord1,coord2,coord3,coord4;
  struct Coordinate coord1Expected,coord2Expected,coord3Expected,coord4Expected;

  initCoordinate(&coord1,3.0,4.0);   coord1Expected.x = 3.0;    coord1Expected.y = 4.0; 
  assertTrue(coordinatesApproxEqual(coord1,coord1Expected),"coordinatesApproxEqual(coord1,coord1Expected)");

  initCoordinate(&coord2,-1.2,-3.4); coord2Expected.x = -1.2;   coord2Expected.y = -3.4; 
		   
  assertTrue(coordinatesApproxEqual(coord2,coord2Expected), "coordinatesApproxEqual(coord2,coord2Expected)");

  initCoordinate(&coord3,0.0,0.0);   coord3Expected.x = 0.0;    coord3Expected.y = 0.0; 
  assertTrue(coordinatesApproxEqual(coord3,coord3Expected),"coordinatesApproxEqual(coord3,coord3Expected)");

  initCoordinate(&coord4,0.5,-0.6);  coord4Expected.x = 0.5;    coord4Expected.y = -0.6; 
  assertTrue(coordinatesApproxEqual(coord4,coord4Expected), "coordinatesApproxEqual(coord4,coord4Expected)");

  return 0;
}
