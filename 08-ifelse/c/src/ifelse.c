/*
 * Title:			If Else - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			07/06/2024
 * Last Updated:	07/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char *argv[]) {

    bool randomBool;
    time_t t;

    printf("Generating a random bool...\n");

    /* Generate a random bool */
    srand((unsigned) time(&t));
    randomBool = rand() & 1;

    if (randomBool) {

        printf("It's true!\n");
   
    } else {

        printf("It's false!\n");

    }

    return 0;

}
