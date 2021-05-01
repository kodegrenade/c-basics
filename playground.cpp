/**
 * Week 10-11
*/
#include <iostream>
using namespace std;

int main () 
{
    string name, remark;
    float math, english, general_paper;
    float total, average;
    for (int i = 0; i <= 10; i++) {
        cout << "Enter your name:" << endl;
        cin >> name;
        cout << "Enter math score:" << endl;
        cin >> math;
        cout << "Enter english score:" << endl;
        cin >> english;
        cout << "Enter general paper score:" << endl;
        cin >> general_paper;
        total = math + english + general_paper;
        average = total / 3;
        if (average > 49) {
            remark = "Pass";
            cout << "Remark: " << remark << endl;
            cout << "Name: " << name << "\nMath: " << math << "\nEnglish: " << english << "\nGeneral Paper: " << general_paper << endl;
            cout << "Total: " << total << endl;
            cout << "Average: " << average << endl;
        } else {
            remark = "Fail";
            cout << "Remark: " << remark << endl;
            cout << "Name: " << name << "\nMath: " << math << "\nEnglish: " << english << "\nGeneral Paper: " << general_paper << endl;
            cout << "Total: " << total << endl;
            cout << "Average: " << average << endl;
        }
    }
    return 0;
}