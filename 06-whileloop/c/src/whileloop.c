/*
 * Title:			While Loop - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			09/06/2024
 * Last Updated:	09/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

   int i=0;

   printf("Starting while loop...\n");

   while (i < 11) {
       printf("%i ", i);
       i++;
   }

   printf("\nDone!\n");

   return 0;

}
