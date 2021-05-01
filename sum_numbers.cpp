/**
 * A program to compute the sum of the first nth numbers of any given integer
*/
#include <iostream>
using namespace std;

int main () 
{
    int number, sum, i;
    sum = 0;
    i = 0;

    cout << "Enter the range of number you want to calculate it\'s sum:" << endl;
    cin >> number;

    while (i < number) {
        i++;
        sum +=i;
    }

    cout << "The sum of the first " << number << " integers is " << sum << endl;
    
    return 0;
}