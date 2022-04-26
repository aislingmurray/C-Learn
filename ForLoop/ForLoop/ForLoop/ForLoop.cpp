#include <iostream>
using namespace std;

int main()
{
    int factorial = 1;
    int number;
    cout << "Number: ";
    cin >> number;

    /*for (int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }*/

    for (int i = number; i >= 1; i--) {
        factorial = factorial * i;
    }

    cout << number << "! = " << factorial;

    system("pause>0");
}