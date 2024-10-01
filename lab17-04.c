/** lab17-04.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/

#include <stdio.h>


int main(void)
{
   int userIn = 0;

   printf("Survey response scale: 10 - Outstanding, 8-9 - Excellent, 6-7 - Good, 5 - Average, 3-4 - Below Average, 1-2 - Awful, 0 - Horrible.");
   printf("\nEnter an integer value from 0-10 corresponding to your opinion of Cookies 'n Cream ice cream:");
   scanf("%d", &userIn);

   switch (userIn){
      case 10:
         printf("Outstanding\n");
         break;
      case 9:
         printf("Excellent\n");
         break;
      case 8:
         printf("Excellent\n");
         break;
      case 7:
         printf("Good\n");
         break;
      case 6:
         printf("Good\n");
         break;
      case 5:
         printf("Average\n");
         break;
      case 4:
         printf("Below Average\n");
         break;
      case 3:
         printf("Below Average\n");
         break;
      case 2:
         printf("Awful\n");
         break;
      case 1:
         printf("Awful\n");
         break;
      case 0:
         printf("Horrible\n");
         break;

      default:
         printf("You did not enter a value between 0 and 10.\n");
   }

   return 0;

}