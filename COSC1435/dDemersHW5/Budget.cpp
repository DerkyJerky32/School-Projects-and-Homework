/*
Name: Derrick Demers
Date: 11/18/2021
Purpose: The purpose of this program is to calculate and display monthly 
			expenses for a student between five categories using parallel arrays
*/

#include <iostream> 
#include <iomanip>      

using namespace std;

int main()
{   
    int choice;
	const int size = 5; //constant array size
	double expenseTotals[size]; //used to store the numbers for the expenses
	string expenseCategories[size] = {"food", "clothes", "entertainment", "tools", "car"}; //category array
    double grandTotal; //grand total of expenses
    
    do
    {
        cout << endl << endl
             << "    Please make a selection....    " << endl
             << "-----------------------------------" << endl
             << "1. Enter expenses                  " << endl 
			 << "2. Expense Report					" << endl
			 << "3. Exit							" << endl << endl
             << "Choice: ";
             cin >> choice; //our menu where the user makes their choice
             
             while (choice < 1 || choice > 3) //if the user input in invalid
             {
                 cout << "ERROR---Invalid input" << endl
                      << "Enter 1, 2, 3" << endl
                      << "Choice: "; //error display and oppertunity to anter another choice
                 cin >> choice;
             }
             
             switch (choice) //switch statement to make our menu
             {
                 case 1:
                 {
					 for (int count = 0; count < size; count++)
					 {
						 cout << "Enter the expense for " << expenseCategories[count] << ": $";
						 cin >> expenseTotals[count];
						 count + 1; //takes each category expense and user inputs into each array spot
					 }
                 }  
                    break; //separate the choices
                
                case 2:
                {
					grandTotal = 0; //resets the grand total to 0 each time
					
					cout << "        Expense Report			" << endl
						 << "-----------------------------------" << endl;
						 
					for (int x = 0; x < size; x++)
					{
						cout << expenseCategories[x] << "			" << expenseTotals[x] << endl; //prints the expense category and the corresponding value in the expense totals 
						grandTotal += expenseTotals[x]; //adds each expense to the grabd total
						x + 1;
					}
					cout << "Total expenses: $" << grandTotal << endl << endl;
                }
                    break;
                

                case 3 :
                    cout << "Goodbye..." << endl;
                    return 0; //quits out of the program
                    break;
             } 
    } while (choice <= 2 && choice >= 1); //loops while the coicces are within 1 & 2
    
	return 0;
}
