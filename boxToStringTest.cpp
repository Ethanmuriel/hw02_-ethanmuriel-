
#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box p1,p2;

  initBox(&p1,3.4,-5,5,7);  
  assertEquals("ul=(3.4,-5),w=5,h=7", boxToString(p1), "boxToString(p1)");

  initBox(&p2,3.14159,6.2831853071,-5.4012342342,6.02212656);
  assertEquals("ul=(3.14,6.28),w=-5.4,h=6.02", boxToString(p2), "boxToString(p2)");
  assertEquals("ul=(3,6),w=-5,h=6", boxToString(p2,1), "boxToString(p2,1)");
  assertEquals("ul=(3.142,6.283),w=-5.401,h=6.022", boxToString(p2,4), "boxToString(p2,4)");
  assertEquals("ul=(3.1416,6.2832),w=-5.4012,h=6.0221", boxToString(p2,5), "boxToString(p2,5)");

		   
  return 0;
}
