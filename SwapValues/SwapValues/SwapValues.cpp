#include <iostream>
using namespace std;

int main()
{
    //Program for swapping valuse of two variables

    int a = 20;
    int b = 10;

    /*int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " b = " << b << endl; */

    a = a + b; // 30
    b = a - b;
    a = a - b;

    cout << "a = " << a << " b = " << b << endl;

    system("pause>0");
}