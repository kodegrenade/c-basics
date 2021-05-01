#include <iostream>
using namespace std;

int main()
{
    int input;
    int number;
    int third;
    int total;
    float average;
    
    cout << "Hello world" << endl;
    cout << "Enter first number" << endl;
    cin >> input;
    cout << "Enter second number" << endl;
    cin >> number;
    cout << "Enter third number" << endl;
    cin >> third;
    total = input + number + third;
    average = total / 3;
    cout << "Total is: " << total << endl;
    cout << "Average is:" << average << endl;

    return 0;
}