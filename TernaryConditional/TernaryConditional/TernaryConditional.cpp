#include <iostream>
using namespace std;

int main()
{
	//Different datatypes are available
	//Limits to host user can make it easier to guess
	//Loops for multiple attempts for guessing
	int hostUserNum, guestUserNum;
	cout << "Host: ";
	cin >> hostUserNum;
	system("cls");
	cout << ("Guest: ");
	cin >> guestUserNum;

	(hostUserNum == guestUserNum) ? cout << "Correct!": cout << "Failed!";


	/*if (hostUserNum == guestUserNum)
		cout << "Correct!";
	else
	{
		cout << "Failed!";
	}*/

	system("pause>0");
}
