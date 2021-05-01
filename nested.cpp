/**
 * A program to calculate the sum 2 + 5 + 8 ..... 100 using two different loop structure
*/
#include <iostream>
using namespace std;

int main () 
{
    int number, range, i, sum;
    range = 100;
    number = 2;
    sum = 0;

    while (range > 0 && range <= 100) {
        cout << number << endl;
        number += 3;
        range -= 3;
        sum += number;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}