/*
Name: DERRICK DEMERS
Date: 11/18/2021
Purpose: The purpose of this program is to define a two-dimensional array of integers and
			fill it with values using the equation array_name[j][i] = i + j + 2 
			(j = row index, i = column index)
*/
#include <iostream>
using namespace std;

int main()
{
	int array_name[4][4]; //creating the 2D array with the amount of elements it will hold
	
	for (int i = 0; i < 4; i++)  
	{
		for (int j = 0; j < 4; j++)
		{
			array_name[j][i] = i + j + 2;
		}
	} //this for loop fills the spaces of the array with elements made by the formula. 
	  //The positions of the array (0, 1, 2, 3) get added to each other then by 2 to make
	  //the elements within the array
	
	cout << "Values in the 2D array:" << endl;
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			cout << array_name[j][i] << " ";
		} //prints the elements
		
		cout << endl;
		
	}
	
	int one_Dimensional_Array[4]; //creates the 1D array
	
	int count = 0, j = 0, i = 0; //resets the numbers
	
	while(i < 4 && j < 4) //loops while the elements are less than 4
	{
		one_Dimensional_Array[count] = array_name[i][j];
		count++;
		i++;
		j++; //plus the elemetnms from the 1D array to the 2D array
	}
	
	cout << "Values in 1D Array: " << endl;
	
	for(int count = 0; count < 4; count++)
	{
		cout << one_Dimensional_Array[count] << " ";
	} //prints the elements in the 1D array
	
	cout << endl;
	
	return 0;
}
