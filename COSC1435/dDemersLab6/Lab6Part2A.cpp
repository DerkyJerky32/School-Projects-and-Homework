//Name: DERRICK DEMERS
//Date: 10/7/2021
//Purpose of this program is to take grade inputs and print them as Pass/NoPass

#include <iostream>
using namespace std;

int main()
{
	int grade;
	
	cout << "Enter the students grade (0-100)" << endl
		 << "Grade: ";
	cin >> grade;
	
	while (grade < 0 || grade > 100)
	{
		cout << "Invalid expression, please enter the grade again..." << endl
			 << "Grade: ";
		cin >> grade;
	}
	
	switch (grade)
	{
		case 1 ... 59 :
			cout << "Grade is " << grade << " you do not pass..." << endl;
			break;
			
		case 60 ... 69 :
			cout << "Grade is " << grade << " you pass with a D" << endl;
			break;
		
		case 70 ... 79 :
			cout << "Grade is " << grade << " you pass with a C" << endl;
			break;
			
		case 80 ... 89 :
			cout << "Grade is " << grade << " you pass with a B" << endl;
			break;
		
		case 90 ... 100 :
			cout << "Grade is " << grade << " you pass with an A" << endl;
			break;
	}
	
	return 0;
}