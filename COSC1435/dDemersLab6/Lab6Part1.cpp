//Name: DERRICK DEMERS
//Date: 10/7/2021
//Purpose of this program is to calculate shirt sales and discounts

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double shirts;
	double discount, SubTotal, total;
	
	cout << "How many shirts are you purchasing?" << endl
		 << "Shirts: " ;
	
	cin >> shirts;
	
	while (shirts <= 0)
	{
		cout << "Invalid number, please enter another number " << endl
			 << "Shirts: " ;
		cin >> shirts;
	}
	

	if (shirts >= 5 && shirts <= 10)
	{
		SubTotal = 12 * shirts;
		discount = SubTotal * .10;
		total = SubTotal - discount;
		cout << "Total sale is $" << setprecision(2) << fixed << total << endl;
	}
		
	else if (shirts >= 11 && shirts <= 20)
	{
		SubTotal = 12 * shirts;
		discount = SubTotal * .15;
		total = SubTotal - discount;
		cout << "Total sale is $" << setprecision(2) << fixed << total << endl;
	}
		
	else if (shirts >= 21 && shirts <= 30)
	{
		SubTotal = 12 * shirts;
		discount = SubTotal * .20;
		total = SubTotal - discount;
		cout << "Total sale is $" << setprecision(2) << fixed << total << endl;
	}
		
	else if (shirts >= 31)
	{
		SubTotal = 12 * shirts;
		discount = SubTotal * .25;
		total = SubTotal - discount;
		cout << "Total sale is $" << setprecision(2) << fixed << total << endl;
	}
		
	else
	{
		total = shirts * 12;
		cout << "Total sale is $" << setprecision(2) << fixed << total <<endl;
	}
	
	return 0;
}