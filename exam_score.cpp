#include <iostream>
using namespace std;

int main ()
{
    int score, percentage;

    cout << "Enter COM313 Examination Score: " << endl;
    cin >> score;

    percentage = score / 100;

    switch (percentage)
    {
        case 10:
        case 9:
        case 8:
            cout << "Grade: A" << endl;
        break;

        case 7:
            cout << "Grade: B" << endl;
        break;

        case 6:
            cout << "Grade: C" << endl;
        break;

        case 5:
            cout << "Grade: D" << endl;
        break;
    
        default:
            cout << "Grade: F" << endl;
        break;
    }
    return 0;
}