/** lab17-02.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include <string.h>
#include "lab17functs.h"
#include <stdio.h>

int main(void)
{
   char myStr[] = "hello, this is a test.";
   int theNum = countVowels(myStr);
   printf("The number of vowels is %d.", theNum);
   return 0;

}