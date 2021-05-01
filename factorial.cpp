/**
 * A program to calculate the factorial of any give number 
**/
#include <iostream>
using namespace std;

int main () 
{
    int number, nfact;
    int fact = 1;
    int i = 0;

    cout << "Enter number" << endl;
    cin >> number;
    nfact = number;

    while (number > 0) {
        fact *= number;
        number -=1;
    }

    cout << "The factorial of " << nfact << " is : " << fact << endl;
    
    return 0;
}