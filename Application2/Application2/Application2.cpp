#include <iostream>
using namespace std;

int main()
{
    int yearOfBirth = 2002;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 15000;

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    //-1, -2, -3,....-2147483648
    cout << "Int min value is " << INT_MIN << endl;
    //0, 1, 2, 3,....2147483647
    cout << "Int max value is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes \n";
    cout << "UInt max value is " << UINT_MAX << " bytes \n";
    cout << "Size of bool is " << sizeof(bool) << " bytes \n";
    cout << "Size of char is " << sizeof(char) << " bytes \n";
    cout << "Size of float is " << sizeof(float) << " bytes \n";
    cout << "Size of double is " << sizeof(double) << " bytes \n";

    system("pause>0");
}
