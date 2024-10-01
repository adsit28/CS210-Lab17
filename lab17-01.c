/** lab17-01.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include <stdio.h>
#include "lab17functs.h"

int main(void)
{
   int bigy[100];
   int numIn = loadVals(bigy);
   reversePrint(bigy, numIn-1);
   return 0;

}