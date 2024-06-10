/*
 * Title:			Addition - C example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			07/06/2024
 * Last Updated:	07/06/2024
 *
 * Modinfo:
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    int day = 0;
    bool valid = false;

    do {
        printf("Please enter a number between 1 and 7: ");
        if (scanf("%d", &day) == 1) {
            if (day >= 1 && day <= 7) {
                valid = true;
            }
        }
        else {
            printf("Invalid number!\n");
        }
    } while (!valid);

    switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    }

    return 0;
}
