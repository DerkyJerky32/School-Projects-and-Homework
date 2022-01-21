//Name: DERRICK DEMERS
//Date: 10/7/2021
//Purpose of this program is to take user input and assign it to -1, 0, or 1

#include <iostream>
using namespace std;

int main()
{
	double x, n;
	
	cout << "Print a number: ";
	cin >> n;
	
	if (n < 0)
	{
		x = -1;
		cout << "The assigned value is now " << x << endl;
	}
	
	else if (n == 0)
	{
		x = 0;
		cout << "The assigned value is now " << x << endl;
	}
	
	else if (n > 0)
	{
		x = 1;
		cout << "The assigned value is now " << 1 << endl;
	}
	
	return 0;
}