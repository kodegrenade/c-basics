#include <iostream>
using namespace std;

int main()
{
    // variable declaration
    string name;
    int age;

    // accept value from user
    cout << "Please, enter your name: " << endl;
    cin >> name;
    cout << "Your age is required: " << endl;
    cin >> age;
    
    // display input to user
    cout << "Your name is : " << name << endl;
    cout << "Your age is : " << age << endl;
    return 0;
}