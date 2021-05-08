#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    string word, temp;
    int length;

    cout << "Enter word for palidrome check:" << endl;
    cin >> word;

    length = word.length();

    do {
        temp += word[length - 1];
        length -= 1;
    } while (length > 0);

    cout << "You entered: " << word << endl;
    cout << "Reversed word: " << temp <<  endl;

    if (temp == word) {
        cout << "The word you entered is a palindrome." << endl;
    } else {
        cout << "The word you entered is not a palindrome." << endl;
    }

    return 0;
}