/**
 * A program to calculate salesman commission
*/
#include <iostream>
using namespace std;

int main () 
{
    float sales, commission;

    cout << "Enter sales amount: " << endl;
    cin >> sales;
    
    // compute commission
    commission = (15.0 / 100) * sales;

    if (sales >= 50) {
        cout << "Your commission is : " << commission << endl;
    } else {
        cout << "Sorry, you do not have any commission." << endl;
    }
    
    return 0;
}