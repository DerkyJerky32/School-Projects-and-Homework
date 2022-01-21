/*
Name: Derrick Demers
Date: 10/22/2021
Purpose: The purpose of this program is to calculate and display monthly expenses for a student between four categories
*/

#include <iostream> 
#include <iomanip>      

using namespace std;

int main()
{   
    int choice;
    
    double temp, groceries, eatingOut, clothes,
           entertainment, groceriesTotal, eatingOutTotal, 
           clothesTotal, entertainmentTotal, grandTotal; 
		   //initializing each element, all doubles because change is a thing
    
    do
    {
        cout << endl << endl
             << "    Please make a selection....    " << endl
             << "-----------------------------------" << endl
             << "1. Enter the Groceries expense     " << endl
             << "2. Enter the Eating Out expense    " << endl
             << "3. Enter the Clothes expense       " << endl
             << "4. Enter the Entertainment expense " << endl
             << "5. Print Report                    " << endl
             << "6. Print Formatted Report          " << endl
             << "7. exit                            " << endl << endl
             << "Choice: ";
             cin >> choice; //our menu where the user makes their choice
             
             while (choice < 1 || choice > 7) //if the user input in invalid
             {
                 cout << "ERROR---Invalid input" << endl
                      << "Enter 1, 2, 3, 4, 5, 6, or 7" << endl
                      << "Choice: "; //error display and oppertunity to anter another choice
                 cin >> choice;
             }
             
             switch (choice) //switch statement to make our menu
             {
                 case 1:
                 {
                    cout << "Enter the groceries expense: $";
                    cin >> groceries;
                    
                    groceriesTotal = groceriesTotal + groceries;
                    
                    cout << "Current total groceries expense: $" << setprecision (2) << fixed << groceriesTotal
                         << endl; //adding then displaying the current groceries total
                 }  
                    break; //separate the choices
                
                case 2:
                {
                    cout << "Enter the eating out expense: $";
                    cin >> eatingOut;
                    
                    eatingOutTotal = eatingOutTotal + eatingOut;
                    
                    cout << "Current total eating out expense: $" << setprecision (2) << fixed << eatingOutTotal
                         << endl; //adding then displaying the current eating out total
                }
                    break;
                
                case 3:
                {
                    cout << "Enter the clothes expense: $";
                    cin >> clothes;
                    
                    clothesTotal = clothesTotal + clothes;
                    
                    cout << "Current total groceries expense: $" << setprecision (2) << fixed << clothesTotal
                         << endl; //adding then displaying the clothes out total
                }
                    break;
                
                case 4:
                {
                    cout << "Enter the entertainment expense: ";
                    cin >> entertainment;
                    
                    entertainmentTotal = entertainmentTotal + entertainment;
                    
                    cout << "Current total groceries expense: $" << setprecision (2) << fixed << entertainmentTotal
                         << endl; //adding then displaying the entertainment out total
                }
                    break;
                
                case 5:
                {
                    cout << "   Here is your printed report:   " << endl
                         << "----------------------------------" << endl
                         << "Groceries-------------------------" << setprecision (2) << fixed << groceriesTotal     << endl
                         << "Eating Out------------------------" << setprecision (2) << fixed << eatingOutTotal     << endl
                         << "Clothes---------------------------" << setprecision (2) << fixed << clothesTotal       << endl
                         << "Entertainment---------------------" << setprecision (2) << fixed << entertainmentTotal << endl << endl;
						 //prints the current amount for each category
                }
                    break;
                
                case 6:
                {
                    grandTotal = groceriesTotal + eatingOutTotal + clothesTotal + entertainmentTotal;
                    
                    cout << "   Here is your printed report:   " << endl
                         << "----------------------------------" << endl
                         << "Groceries-------------------------" << setprecision (2) << fixed << groceriesTotal     << endl
                         << "Eating Out------------------------" << setprecision (2) << fixed << eatingOutTotal     << endl
                         << "Clothes---------------------------" << setprecision (2) << fixed << clothesTotal       << endl
                         << "Entertainment---------------------" << setprecision (2) << fixed << entertainmentTotal << endl 
                         << "Grand Total-----------------------" << setprecision (2) << fixed << grandTotal<< endl <<endl;
						 //prints the amount and the grand total of all epenses
                }
                    break;
                
                case 7 :
                    cout << "Goodbye..." << endl;
                    return 0; //quits out of the program
                    break;
             } 
    } while (choice <= 6 && choice >= 1); //loops while the coicces are within 1-6
    
	return 0;
}


