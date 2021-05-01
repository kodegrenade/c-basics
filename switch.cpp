#include <iostream>
using namespace std;

int main () 
{
    // variable declaration and collect data value
    int day;
    cout << "Enter day of the week: " << endl;
    cin >> day;

    // switch operation
    switch (day)
    {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default: 
            cout << "It seems you entered a wrong day." << endl;
    }
}