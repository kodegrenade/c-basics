#include <iostream>
using namespace std;

int main()
{    
    int num = 1;

    /** First Method **/
    for(int i = 1; i < 100; i++) {
        if (i%2 == 1) {
            cout << "First Method: " << i << endl;
        }
    }

    /** Second Method **/
    while (num <= 100) {
        cout << "Second Method: " << num << endl;
        num+=2;
    }

    /** Third Method **/
    do {
        cout << "Third Method: " << num << endl;
        num+=2;
    } while (num <= 100);

    return 0;
}