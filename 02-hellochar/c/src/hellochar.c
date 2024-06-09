/*
 * Title:			Hello Char - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			07/06/2024
 * Last Updated:	07/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>

int main(void) {

   char chr;

   printf("Please enter a character: ");

   chr = getc(stdin);

   printf("Hello, ");
   putc(chr,stdout);
   printf("!\n");

   return 0;

}