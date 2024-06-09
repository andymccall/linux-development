/*
 * Title:			For Loop - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			07/06/2024
 * Last Updated:	07/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

   int i=0;

   printf("Starting loop...\n");

   for ( i = 0; i < 11; i++) {
      printf("%i ", i);
   }

   printf("\nDone!\n");

   return 0;

}
