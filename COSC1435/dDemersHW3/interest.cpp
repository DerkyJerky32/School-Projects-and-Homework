//Name: DERRICK DEMERS
//Date: 10/7/2021
//Purpose: The purpose of this program is to calculate the amount in a
//		   savings account after a set amount of time with an interest rate 

#include <iostream>
#include <iomanip> //needed for setting precision
#include <cmath> //what will allow us to use exponents

using namespace std;

int main()
{
	double InterestRate, 
		   TimesCompounded,
		   principal, 
		   InterestAmount,
		   TotalAmount; //all in double for decimals and accuracy
		   
	cout << setprecision(2) << fixed << endl; /*sets all of our numbers to 
												show two numbers after decimal*/
	
	cout << "Enter the Interest Rate, the Principal, and the " << endl
		 << "number of times the Interest was Compounded..." << endl;
		 
	cout << "Interest Rate: %";
	cin >> InterestRate; /* gathering our interest rate */
	
	InterestRate = InterestRate/100; /* converting the whole number that
										was input into an actual percentage/decimal */
	
	cout << "Principal: $";
	cin >> principal; /* getting our initial amount in the savings */
	
	cout << "Times Compounded: ";
	cin >> TimesCompounded; /* times the interest rate has occured */
	
	TotalAmount = principal * pow((1 + (InterestRate/TimesCompounded)), TimesCompounded);
	//The formula that will get the total amount
	//Exponent is used in this formula with pow()
	
	cout << "Total Amount in Savings: $" << TotalAmount << endl;
	//printing the total amount to the user
	
	
	return 0;
}