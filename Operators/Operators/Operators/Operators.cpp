#include <iostream>
using namespace std;

int main()
{
    //Main priority
    // + - * / %

    cout << 5 + 2 << endl; //7
    cout << 5 - 2 << endl; //3
    cout << 5 * 2 << endl; //10
    cout << 5.0 / 2.0 << endl; //2.5
    cout << 5 % 2 << endl; //1

    //++ --
    int counter = 7;
    counter++; //Plus one 
    cout << counter << endl;
    counter--; //Minus 1
    cout << counter << endl;

    int counter2 = 7;
    cout << counter2++ << endl; //Post increment
    cout << ++counter2 << endl; //Pre increment

    system("cls");

    //Second priority
    //< > <= >= == !=
    //0 = false, 1 = true
    int a = 5, b = 8; //Comma is also an operator here
    cout << (a > b); //Greater than
    cout << (a <= b); //Less than or equal to
    cout << (a != b); //Not equal to

    system("cls");

    //Last priority
    //&& || !
    cout << (a == 5 && b == 5);
    cout << (a == 5 || b == 5);
    cout << !(a == 5 || b == 5);

    system("cls");

    // = += -= *= /= %=
    int x = 5, y = 5;
    x += 7; //The plus has priority so it really means 'x = x + 7'
    y -= 7; //y = y - 7
    cout << x << endl;
    cout << y << endl;

    system("pause>0");
}
