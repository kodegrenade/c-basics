#include <iostream>
using namespace std;
int main () 
{
    int gallons;
    double litres;
    const double no_litres = 3.78533;
    
    cout << "Enter number of gallons\n";
    cin >> gallons;

    litres = gallons * no_litres;

    cout << "\n There are " << litres << " litres in " <<  gallons << " Gallons" << endl;

    return 0;
}