/*
Name: DERRICK DEMERS
Date: 11/4/2021
Purpose: The prupose of this program is to use functions to convert the value
		 of fahrenheit to celsius
*/

#include <iostream>

using namespace std;

double celsius(double); //getting the funtion initialized for use

int main()
{
	const int MINIMUM_TEMP = 0,
			  MAXIMUM_TEMP = 20; 
			  //setting up the minimum and maximum tempurature range
			  
	double c; //the value used for celsius
	
	cout << endl << endl 
		 << "*******************************************" << endl
		 << "Fahrenheit		| 	Celsius" << endl 
		 << "*******************************************" << endl;
		 //formatting for how it will be displayed
	
	for (int f = MINIMUM_TEMP; f <= MAXIMUM_TEMP; f++)
	{
		c = celsius(f); 
		//calling the function celsius and using the value for fahrenheit
		
		cout << "  " << f << "				" << c << endl;
	}
	//a for loop used to print the values of celsius and fahrenheit
	//from the minimum temp value to the maximum
	
	return 0;
}

//***************************************************************
//																*
//the funtion for clesius										*
//where the values of fahrenheit are converted into celsius		*
//																*
//***************************************************************

double celsius(double f)
{
	return (5.0 / 9.0) * (f - 32.0);
	//converting fahrenheit to celsius
	//and then returning the value to main()
}