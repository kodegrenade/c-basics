#include <iostream>
using namespace std;

int main()
{   
    double cost;

    cout << "Enter Cell Phone Cost: " << endl;
    cin >> cost;

    cout.precision(2);
    cout << "Cell Phone Cost: " << fixed << cost << endl;
    return 0;
}