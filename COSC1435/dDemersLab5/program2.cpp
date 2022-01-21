//Name: DERRICK DEMERS



#include <iostream>
using namespace std;

int main ()
{
	double purchaseAmount;
	double stateTax = .04;
	double countyTax = .04;
	double totalPurchase;
	
	cout << "Enter the price: $";
	cin >> purchaseAmount;
	
	totalPurchase = (purchaseAmount * stateTax) + (purchaseAmount * countyTax) + purchaseAmount;
	
	cout <<  "Total purchase is: $" << totalPurchase << endl;
	
	return 0;
}