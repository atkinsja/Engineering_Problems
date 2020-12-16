#include <iostream>
#include "programs.h" 
using namespace std;
int print_options();
int prompt_user();
int cases(int program_number);

int main()
{
	
	while (prompt_user() != 0)
	{
		cout << "Input error. Please try again." << endl;
	}
	return 0;
}

int print_options()
{
	
	cout << "1. Area of a cylindar calculator." << endl;
	cout << "2. Calculate the temperature at a given depth." << endl;
	cout << "3. Estimate the temperature since a power failure." << endl;
	cout << "4. Find the cost of producing open-top cylindrical containers." << endl;
	cout << "5. Categorize aircraft based on speed and size." << endl;
	cout << "6. Identify materials based on boiling poing." << endl;
	cout << "0. Quit" << endl;
	return 0;
}

int prompt_user()
{
	int program_number;

	do
	{
		int second_prompt = -1;
		print_options();
		cout << endl << "Enter the number of the program to run: ";
		cin >> program_number;
		system("cls");
		cases(program_number);
		
	} while (program_number != 0);
		
	return 0;
	
}

int cases(int program_number)
{
	switch (program_number)
	{
	case 1:
		circle_area();
		break;
	case 2:
		temp_depth();
		break;
	case 3:
		power_failure();
		break;
	case 4:
		container_cost();
		break;
	case 5:
		aircraft_categories();
		break;
	case 6:
		material_identification();
		break;
	case 0:
		return 0;
	default:
		return -1;
	}
	return 0;
}
