/*
Name: DERRICK DEMERS
Date: 11/4/2021
Purpose: The prupose of this program is to use functions to find the 
		  area of a rectangle
*/

#include <iostream>
using namespace std;

double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double); 
//initializing the functions 

int main()
{
	double length,
		   width,
		   area; //initializing the elements
	
	length == getLength(length);
	width  == getWidth(width);
	area   == getArea(length, width);
	displayData(length, width, area);
	//calling each of the functions one by one
	
	return 0;
}

double getLength(double len) //the length function
{
	double length;
	cout << "Enter the rectangle's length: ";
	cin >> length;
	return length;
}

double getWidth(double wid) //the width function
{
	double width;
	cout << "Enter the rectangle's width: ";
	cin >> width;
	return width;
}

double getArea (double l, double w) //the area function
{
	return l * w; //takes the length and width and multiplies both
}

void displayData(double l, double w, double a)
{
	cout << "Length = " << l << endl
		 << "Width  = " << w << endl
		 << "Area   = " << a << endl;
} //the display function that displays the elements and the area 
