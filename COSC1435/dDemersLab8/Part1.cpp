/*
Name: DERRICK DEMERS
Date: 10/21/2021
Purpose: The purpose of this program is to take the sales from four stores
			and print the results in the form of a bar graph
*/

#include <iostream>

using namespace std;

int main()
{
	int sales[4]; //an array with four integers
	
	for (int i = 0; i < 4; i++) //a loop to count enter each store sales value
	{
		cout << "Enter today's sales for Store " << (i+1) << ": "; //prints the store number
		cin >> sales[i]; //enter the store's sales
	}
	
	cout << endl << "SALES BAR CHART" << endl
		 << "(each * = $100)" <<endl; //chart title and guide to each asterisk
	
	for (int i = 0; i < 4; i++) //loop for each store
	{
		int asterisks = sales[i]/100; //takes each sale and divides it by 100
		
		cout << "Store " << (i+1) << ": "; //prints the store number
		
		for (int x = 0; x < asterisks; x++) //this loop prints 1 asterisk for every 100 as stated previously
		{
			cout << "*"; 
		}
		
		cout << endl;
	}
	
	return 0;
}