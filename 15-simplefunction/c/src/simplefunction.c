/*
 * Title:			Simple Function - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			10/06/2024
 * Last Updated:	10/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>


int simplefunction(int a, int b) {
    printf("   Inside simplefunction()\n");
    return a+b;
}

int main(int argc, char *argv[]) {

    int i = 0;

    printf("Before simplefunction() i = %i\n", i);
    printf("Calling simplefunction(1,1)\n");
    i = simplefunction(1,1);
    printf("Back from simplefunction()\n");
    printf("After simplefunction(), i = %i\n", i);
    
   return 0;

}
