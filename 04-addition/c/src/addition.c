/*
 * Title:			Addition - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			07/06/2024
 * Last Updated:	07/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

   int intNumber1=0;
   int intNumber2=0;
   int total=0;

   printf("Please enter two integers: \n");

   if (scanf("%d%*[ ]%d", &intNumber1, &intNumber2) == 2) {

      total = intNumber1+intNumber2;
      printf("%i + %i = %i\n",intNumber1, intNumber2, total);
   
   } else {
      printf("Failed to read two integers.\n");
   }

   return 0;

}
