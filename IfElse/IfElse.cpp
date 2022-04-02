#include <iostream>
using namespace std;

int main()
{
	//User enters integer number
	//Program writes out if the number is even or odd
	
	int number;
	cout << "Enter whole number: ";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << number << " is an even number." << endl;
	}
	else
	{
		cout << number << " is an odd number." << endl;
	}
	cout << "Your welcome. :)";

	system("pause>0");
}