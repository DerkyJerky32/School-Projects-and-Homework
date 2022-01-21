/*
Name: DERRICK DEMERS
Date: 11/12/2021
Purpose: The purpose of this program is to ask for the user to enter the
	sales from six stores and then display them as bar graphs
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int n = 6; //constant int for the array
	int stores[n]; //array of our stores
	
	for (int i = 0; i < n; ++i) //for loop for initializing the array with elements
	{
		cout << "Enter today's sales for store " << i + 1 << ": ";
		cin >> stores[i];
	}
	
	cout << endl << "SALES BAR CHART" << endl;
	
	for (int i = 0; i < n; ++i) //for loop to print the bar graph
	{
		cout << "Store " << i + 1 << ":";
		for (int j = 0; j < stores[i]; j += 100) //counts each 100
		{
			cout << "*"; //prints an asterisk for each 100
		}
		cout << "\n";
	}
}