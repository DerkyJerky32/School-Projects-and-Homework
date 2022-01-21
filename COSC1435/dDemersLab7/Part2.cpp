//Name: DERRICK DEMERS
//Date: 10/14/2021
//Purpose: The purpose of this program is to check the number
//			of employees at a bank in the past 3 years and calculate
//			how many sick days off were taken between them

#include <iostream>

using namespace std;

int main()
{
	int tellers,
		daysSick,
		totalSickDays = 0; /* initializing our number of tellers, each sick day,
							  and the grand total of sick days between them */
							  
	cout << "How many tellers have worked at the bank in the " << endl
		 << "past three (3) years? " << endl;
	
	while (!(cin >> tellers) || (tellers < 0))
	{
		cout << "ERROR: amount of tellers must be greater than 0" << endl
			 << "Number of Tellers: ";
		
		cin.clear();
		cin.ignore(1200, '\n');
	} /* this 'while' loop checks to see if the user entered a valid number 
		 for the amount of tellers, a valid number being a number greater than 0*/
	
	for (int tellersCounter = 0; tellersCounter < tellers; tellersCounter++)
	{
		for (int year = 1; year < 4; year++)
		{
			cout << "How many days was teller " << tellersCounter+1
				 << " out sick during year " << year << "?" << endl
				 << "Days sick: ";
			
		while (!(cin >> daysSick)|| (daysSick <= -1))
			{
			cout << "ERROR: amount of sick days must be zero (0) or a positive number" << endl
			 << "Days sick: ";
		
			cin.clear();
			cin.ignore(1200, '\n');
			}
		totalSickDays += daysSick;
		}/* this 'while' loop checks to see if the user entered a valid number 
		 for the amount of sick days taken, a valid number being a number greater than -1*/
	} 
	/* This 'for' loop  gathers the amount of tellers and loops three times for each year
		for each employee until the number of tellers has been reached also while adding the 
		amount of sick days from each teller to the grand total of sick days*/
	
	
	cout << endl << "In the past three years, the " << tellers << endl
		 << " tellers were out sick for a total of " << totalSickDays << " days." <<endl;
	
	
	//printing the grand total across all employees
	return 0;
}