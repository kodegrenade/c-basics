#include <iostream>
using namespace std;

int main()
{
    int array [100];
    int k = 0;

    for (int index = 0; index <= 100; index++) {
        array[k] = index;
        k++;
    }
    for (int i = 1; i <= 100; i++) {
        cout << array[i] << " ";
        if ((i + 0) % 10 == 0) {
            cout << endl;
        }
    }
    return 0;
}