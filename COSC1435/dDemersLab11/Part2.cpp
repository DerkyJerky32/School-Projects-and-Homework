/*
Name: DERRICK DEMERS
Date: 11/18/2021
Purpose: Thge purpose of this program is to use parallel arrays for sales of jars of salsa
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int getTotal(int[], int); 

int getSmallest(int[], int);

int getLargest(int[], int);

//initializes the functions for getting the total, largest, and smallest

int main()
{
	const int salsaTypes = 5; //constant integer of 5
	int sales[salsaTypes]; //array for the sales nuumbers
	string salsaNames[salsaTypes] = {"mild", "medium", "sweet", "hot", "zesty"}; //array for the types of salsa
	
	int totalSold, //total amount of salsa sold
		highestSales, //value for highest sold salsa
		lowestSales; //value for lowest amount of salsa sold
		
	for (int count = 0; count < salsaTypes; count++) //entering the amount of jars sold by each type
	{
		cout << "Jars sold of " << salsaNames[count] << ": ";
		
		cin >> sales[count];
		
		while (sales[count] < 0) //input validation
		{
			cout << "Error. Enter a positive number. Try again: ";
			cin >> sales[count];
		}
	}
	
	totalSold = getTotal(sales, salsaTypes); //goes to the totalSold function and assigns the value
	
	lowestSales = getSmallest(sales, salsaTypes); //goes to the lowestSales function and assigns the array position
	
	highestSales = getLargest(sales, salsaTypes); //goes to the largestSales function and assigns the array position
	
	cout << endl << endl
		 << "		Salsa Sales		" << endl
		 << "Name				Jars Sold" << endl; //creating the sales chart
	
	for (int i = 0; i < salsaTypes; i++)
	{
	cout << salsaNames[i] << "				" << sales[i] << endl;
	} //looping the amount and the type of salsa
	cout << endl;
	
	cout << "Total Sales: " << totalSold << endl
		 << "Highest sold: " << salsaNames[highestSales] << endl
		 << "Lowest sold: " << salsaNames[lowestSales] << endl;
		 
	return 0;
	
}

//function for getting the total amount sold
int getTotal(int array[], int numSalsa)
{
	int total = 0;
	
	for (int count = 0; count < numSalsa; count++) //adding all values from the amount of salsa array
	{
		total += array[count];
	}
	
	return total;
}

//function for getting which salsa sold most
int getLargest(int array[], int numSalsa)
{
	int indexLargest = 0;
	
	for (int x = 1; x < numSalsa; x++)
	{
		if (array[x] > array[indexLargest]) //compares each number to each other in array
		{
			indexLargest = x; //assigns the value to the position of the array
		}
	}
	
	return indexLargest;
}

//function for getting which salsa sold least
int getSmallest(int array[], int numSalsa)
{
	int indexSmallest = 0;
	
	for (int x = 1; x < numSalsa; x++)
	{
		if(array[x] < array[indexSmallest]) //compares each number to each other in array
		{
			indexSmallest = x; //assigns the value to the position of the array
		}
	}
	
	return indexSmallest;
}















