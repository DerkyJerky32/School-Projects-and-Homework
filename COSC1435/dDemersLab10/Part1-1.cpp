/*
Name: DERRICK DEMERS
Date: 11/12/2021
Purpose: The purpose of this program is to create an array of
	20 values with the even numbers starting from 200
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int list[20]; //initializing the array
	
	for (int i = 200; i <= 240; i+=2) 
	{
		list[i] = i;
	} //initializing the elements in the array
	 //starting at 200 to 240 with only the even numbers
	
	ofstream file("even.txt"); //opening the file even.txt
	
	if(file.is_open()) //if the file is open
	{
		for (int count = 0; count < 19; count++)
		{
			file << list[count] << endl; //printing the values to the file
		}
		file.close(); //closing the file 
	}
	
	else //if the file is unable to open
	{
		cout << "Unable to open file";
		return 0;
	}
}