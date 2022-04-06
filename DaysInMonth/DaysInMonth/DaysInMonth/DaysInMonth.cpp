#include <iostream>

using namespace std;

int main()
{
	int year, month;
	cout << "Year, month: " << endl;
	cin >> year >> month;
	//(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)

	switch (month)
	{
	case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
		cout << "29 Day Month. " : cout << "28 Day Month ."; break;

	case 4:
	case 6:
	case 9:
	case 11: cout << "30 Day Month. "; break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << "31 Day Month. "; break;

	default: cout << "Not Valid!!!"; break;
	}

	system("pause>0");
}