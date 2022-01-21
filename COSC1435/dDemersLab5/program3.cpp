//Name: Derrick Demers
//Date: 9/30/2021

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int first = 2897, 
		second = 5,
		third  = 837,
		fourth = 34,
		fifth  = 8,
		sixth  = 1524;
		
	const float PI = 3.14159;
		
	/*
	cout << first  << "   " << second << "   " << third  << endl;
	cout << fourth << "   " << fifth  << "   " << sixth  << endl;
	invalid, looks awful, used only for example
	*/ 
	
	cout << setw(4) << first  << "   " << setw(4) << second << "   "
        << setw(4) << third  << endl;
    cout << setw(4) << fourth << "   " << setw(4) << fifth  << "   "
        << setw(4) << sixth  << endl << endl << endl << "Part 2:" << endl;

	cout << setprecision(3) << "Pi is " << PI << endl <<endl;
	
	cout << "Pi = " << setprecision(6) << PI << endl;
	cout << "Pi = " << setprecision(5) << PI << endl;
	cout << "Pi = " << setprecision(4) << PI << endl;
	cout << "Pi = " << setprecision(3) << PI << endl; 
	cout << "Pi = " << setprecision(2) << PI << endl;
	cout << "Pi = " << setprecision(1) << PI << endl << endl << endl;

	
	double month1 = 1234.56,
		   month2 = 2345.67,
		   month3 = 3456.78;
	
	cout << setprecision(6);
	cout << "The first month’s sales = $" << month1 << endl;
	cout << "The second month’s sales = $" << month2 << endl;
	cout << "The third month’s sales = $" << month3 << endl << endl << endl;
	
	cout << setprecision(2) << fixed;
	cout << "The first month’s sales = $" << month1 << endl << endl << endl;

	float	grade1 = 80.0,
			grade2 = 85.0,
			grade3 = 90.0,
			avg;

	avg = (grade1 + grade2 + grade3) / 3;
	cout << "The average grade is " << avg << endl << endl << endl;
	
	/* cout << setprecision(4) << showpoint; */
	
	cout << fixed << setprecision(4) << showpoint;
	cout << "The average grade is " << avg << endl; 
	
	


	
	return 0;
}