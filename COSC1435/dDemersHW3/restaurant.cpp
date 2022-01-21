//Name: DERRICK DEMERS
//Date: 10/7/2021
//Purpose: is to give the user a choice of restuarants based on the answers given
//  	   in response to a set of questions

#include <iostream>

using namespace std;

int main()
{
	string vegetarian, vegan, GlutenFree; 
		//string values since whole words are being used
	
	cout << "Is anyone in your party a vegetarian? (yes/no)" << endl
		 << "Vegetarian: ";	 
	cin >> vegetarian;
		//asks the user if one party member is vegetarian, the user answers
			//with 'yes' or 'no'
	
	cout << "Is anyone in your party vegan? (yes/no)" << endl
		 << "Vegan: ";	 
	cin >> vegan;
		//asks if anyone is vegan, user answers 'yes' or 'no'
	
	cout << "Is anyone in your party on a gluten-free diet? (yes/no)" << endl
		 << "Gluten Free: ";	 
	cin >> GlutenFree;
		//asks if anyone is on gluten-free diet, user answers 'yes' or 'no'
	
	if (vegetarian == "yes" && vegan == "yes" && GlutenFree == "yes")
	{
		cout << endl
			 << "Here are your options: " << endl
			 << " The Corner Cafe" 		  << endl
			 << " The Chef's Kitchen" 	  << endl;
	}
	//checks users answers for yes/yes/yes
	
	if (vegetarian == "yes" && vegan == "yes" && GlutenFree == "no")
	{
		cout << endl
			 << "Here are your options: " << endl
			 << " The Corner Cafe" 		  << endl
			 << " The Chef's Kitchen" 	  << endl;
	}
	//checks users answers for yes/yes/no
	
	if (vegetarian == "yes" && vegan == "no" && GlutenFree == "yes")
	{
		cout << endl
			 << "Here are your options: " 	 << endl
			 << " Main Street Pizza Company" << endl
			 << " The Corner Cafe" 			 << endl
			 << " The Chef's Kitchen" 		 << endl;
	}
	//checks users answers for yes/no/yes
	
		if (vegetarian == "yes" && vegan == "no" && GlutenFree == "no")
	{
		cout << endl
			 << "Here are your options: "	 << endl
			 << " Main Street Pizza Company" << endl
			 << " The Corner Cafe" 			 << endl
			 << " Mama's Fine Italian" 		 << endl
			 << " The Chef's Kitchen" 		 << endl;
	}
	//checks users answers for yes/no/no
	
	if (vegetarian == "no" && vegan == "yes" && GlutenFree == "yes")
	{
		cout << endl
			 << "Here are your options: " << endl
			 << " The Corner Cafe" 		  << endl
			 << " The Chef's Kitchen" 	  << endl;
	}
	//checks users answers for no/yes/yes
	
	if (vegetarian == "no" && vegan == "yes" && GlutenFree == "no")
	{
		cout << endl
			 << "Here are your options: " << endl
			 << " The Corner Cafe" 		  << endl
			 << " The Chef's Kitchen" 	  << endl;
	}
	//checks users answers for no/yes/no
	
	if (vegetarian == "no" && vegan == "no" && GlutenFree == "yes")
	{
		cout << endl
			 << "Here are your options: " 	 << endl
			 << " Main Street Pizza Company" << endl
			 << " The Corner Cafe" 			 << endl
			 << " The Chef's Kitchen" 		 << endl;
	}
	//checks users answers for no/no/yes
	
	if (vegetarian == "no" && vegan == "no" && GlutenFree == "no")
	{
		cout << endl 
			 << "Here are your options: " 	 << endl
			 << " Joe's Gourmet Burgers" 	 << endl
			 << " Main Street Pizza Company" << endl
			 << " The Corner Cafe" 			 << endl
			 << " Mama's Fine Italian" 		 << endl
			 << " The Chef's Kitchen" 		 << endl;
	}
	//checks users answers for no/no/no
	
	return 0;
}