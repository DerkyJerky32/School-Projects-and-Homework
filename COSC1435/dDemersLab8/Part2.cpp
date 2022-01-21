/*
Name: DERRICK DEMERS
Date: 10/21/2021
Purpose: The purpose of this program is to calculate the average and standard deviation	
			from three user defined values
*/

#include <iostream>
#include <cmath>

using namespace std;

// Function average prototype
double average(double, double, double);
 
// Function stdev prototype
double stdev(double, double, double, double);


int main()
{
     double d1, d2, d3;
     double avg, dev;
     char again;
 
     do
     {
           cout << "Enter 3 doubles: ";
           cin >> d1 >> d2 >> d3;
           avg = average(d1, d2, d3);      
           cout << "The average is " << avg << endl; 
		   dev = stdev(d1, d2, d3, avg); //calling the stdev function and then assigning the result to dev
		   cout << "The deviation is " << dev << endl; //printing the deviation
           cout<<"\nDo you wish to enter another set of numbers?(Y|N) ";
     		cin >> again;
     } while(again == 'Y' || again == 'y');
 
     cout << "Goodbye\n";
     return 0;
}


//*************************************************
// average function
// Purpose:  Compute the average of three doubles
//
// Return Value
// ------------
// double            average of the three numbers
//
// Parameters
// ------------
// double num1             first number
// double num2             second number
// double num2             second number
//*************************************************

//definition for average
double average(double num1, double num2, double num3)
{
     double avg;
     avg = (num1 + num2 + num3) / 3;
     return avg;  //or just return (num1 + num2 + num3) / 3;
}
 
//definition of stdev (standard deviation)
double stdev (double num1, double num2, double num3, double avg)
{
	double dev;
	
	dev = (pow(num1-avg, 2) + pow(num2-avg, 2) + pow(num3 - avg, 2)) / 2;
	dev = sqrt(dev);
	
	return dev; //returning dev
}

