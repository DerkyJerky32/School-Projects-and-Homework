//Name: DERRICK DEMERS
//Date: 10/14/2021
//Purpose: The purpose of this program is to measure the speed of a vehicle after 
//		    a certain amount of time has passed

#include <iostream>

using namespace std;

int main()
{
	int speed,
		hours,
		distance = 0; /*getting each of our integers and variables initialized
					    the distance is 0 since that is going to be added*/ 
		
	cout << "Enter the speed: " << endl;
	
	while (!(cin >> speed) || (speed < 0))
	{
		cout << "ERROR: speed must be greater than 0" << endl
			 << "Enter the speed: ";
		
		cin.clear();
		cin.ignore(1200, '\n');
	} /* this 'while' loop checks to see if the user entered a valid number for speed
		  a valid number being a number greater than 0*/
	
	cout << "Enter the hours traveled: " << endl;
	
	while (!(cin >> hours) || (hours < 1))
	{ 
		cout << "ERROR: hours must be greater than 1" << endl
			 << "Enter the hours: ";
		
		cin.clear();
		cin.ignore(1200, '\n');
	} /* this 'while' loop checks to see if the user entered a valid number for hours
		  a valid number being a number greater than 1*/
	
	cout << "Hours --- Distance Traveled" << endl << endl; //proper output formatting
	
	for (int i= 0; i < hours; i++)
	{
		distance += speed;
		cout << "   " << (i + 1) << "  -------  " << distance << endl;
	} /* This 'for' loop adds the distance per hour and prints them out 
		 according to each hour */
	
	return 0;
}