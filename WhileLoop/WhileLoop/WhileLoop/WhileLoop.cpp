#include <iostream>
using namespace std;

int main()
{
	//Write out all the numbers between 100-500 that are divisible by 3 and 5

	int counter = 100;
	//cout << "Please enter a number between 100 and 500: " << endl;
	//cin >> counter;

	while (counter <= 500 && counter >= 100)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			cout << counter << " is divisible. \n";
		counter++;
	}


	system("pause>0");
}