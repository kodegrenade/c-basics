#include <iostream>
using namespace std;

int main () 
{

    int score;
    cout << "Enter examination score: " << endl;
    cin >> score;
    
    switch (score)
    {
        case 70 ... 100:
            cout << "Grade: A" << endl;
            cout << "Remark: Distinction" << endl;
            break;
        case 60 ... 69:
            cout << "Grade: B" << endl;
            cout << "Remark: Credit" << endl;
            break;
        case 50 ... 59:
            cout << "Grade: C" << endl;
            cout << "Remark: Merit" << endl;
            break;
        case 40 ... 49:
            cout << "Grade: D" << endl;
            cout << "Remark: Pass" << endl; 
            break;
        case 0 ... 39:
            cout << "Grade: F" << endl;
            cout << "Remark: Fail" << endl;
            break;
        default: 
            cout << "Wrong score entered." << endl;
            break;
    }
}