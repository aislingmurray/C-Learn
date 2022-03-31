#include <iostream>
using namespace std;
//ASCII Table = American Standard Code for Information Interchange

int main()
{

    //All these variables are of type char. Better than typing them out individually!
    char c1, c2, c3, c4, c5;
   
    //Create the cypher
    cout << "Enter 5 letters: ";
    //Can be entered all at once
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    //Printing the translated cypher
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << 
        int(c3) << " " << int(c4) << " " << int(c5) << endl;

    int i1, i2, i3, i4, i5;
    //Create the decypher
    cout << "Enter 5 numbers: " << endl;
    cin >> i1 >> i2 >> i3 >> i4 >> i5;
    cout << "ASCII message: " << char(i1) << "" << char(i2) << "" << 
        char(i3) << "" << char(i4) << "" << char(i5);

    system("pause>0");
}




//These are casting operators for numeric pairs
    /*cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char(97) << endl;
    cout << char(65) << endl;*/