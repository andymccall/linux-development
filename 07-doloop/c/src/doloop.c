/*
 * Title:			Do Loop - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			10/06/2024
 * Last Updated:	10/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>

int main(int argc, char *argv[]) {

   int i=0;

   printf("Starting while loop...\n");

   do {
       printf("%i ", i);
       i++;
   } while (i<11);

   printf("\nDone!\n");

   return 0;

}
