#include <iostream>
using namespace std;

int main()
{
    //User enters the side length of a triangle (a, b, c)
    //Program should write out whether the triangle is 
    //equilateral, isosceles or scalene. 

    float a, b, c;
    cout << "a, b c: ";
    cin >> a >> b >> c;

    if (a == b && b == c)

        cout << "Equilateral triangle.";
    else
        if (a != b && a != c && b != c)
            cout << "Scalene triangle.";
        else
            cout << "Isosceles triangle.";

    //Curly brackets are not used if there is only one line
    //of code to be run not a block

    system("pause>0");
}