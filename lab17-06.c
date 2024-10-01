/** lab17-06.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include "lab17functs.h"
int main(void)
{
   int Garray[] = {-4, 4, 5, 10, -10};
   int minimum = 0;
   int maximum = 0;
   getMinMax(Garray, 5, &minimum, &maximum);

   return 0;

}