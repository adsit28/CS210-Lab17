/** lab17-03.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include "lab17functs.h"
#include <stdio.h>

int main(void)
{
   double values[] = { 5.0, 3.1, 7.2, 3.8, 4.2, 1.1 };

   printf("%d", analyzeValues(values, 6));
   return 0;

}