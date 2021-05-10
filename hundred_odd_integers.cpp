#include <iostream>
using namespace std;

int main()
{

    int number = 200;
    int sum = 0;
    int i = 1;

    // while(number > 0) {
    //     sum += i;
    //     number -= 2;
    //     i += 2;
    // }
    // cout << "Sum: " << sum << endl;

    do {
        sum += i;
        number -= 2;
        i += 2;
    } while (number > 0);
    cout << "Sum: " << sum << endl;

    return 0;
}