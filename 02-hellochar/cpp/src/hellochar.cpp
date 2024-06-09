/*
 * Title:			Hello Char - C++ example
 * Author:			Andy McCall, andy.mccall@gmail.com
 * Created:			09/06/2024
 * Last Updated:	09/06/2024
 *
 * Modinfo:
 */

#include <iostream>

using namespace std;

int main() {

    char chr;

    std::cout << "Please enter a character: ";
    std::cin >> chr;
    std::cout << "Hello, " << chr << endl;
    
    return 0;

}