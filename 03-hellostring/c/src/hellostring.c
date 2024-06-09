/*
 * Title:			Hello String - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			07/06/2024
 * Last Updated:	07/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>

int main(void) {

   char strName[25];

   printf("Please enter your name: ");

   if (scanf("%s24[^\n]", strName) == 1) {
      printf("Hello, %s!\n", strName);
   } else {
      printf("Failed to read string.\n");
   }
   
   return 0;

}