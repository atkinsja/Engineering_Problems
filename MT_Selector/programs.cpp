#include <iostream>
#include <iomanip>
#include "programs.h"
using namespace std;

int circle_area()
{
	const double PI = acos(-1);
	double volume, height, radius;

	system("cls");
	cout << "Please input the radius of the cylindar in cm: ";
	cin >> radius;
	cout << "Please input the height of the cylindar in cm: ";
	cin >> height;
	volume = pow(radius, 2) * PI * height;
	cout << "The volume of the cylindar is: " << volume << " cm." << endl << endl << endl;
	return 0;
}

int temp_depth()
{
	double depth, temp_c, temp_f;

	system("cls");
	cout << "Please input the depth in km for the desired temperature: ";
	cin >> depth;
	temp_c = 10 * depth + 20;
	temp_f = 1.8*temp_c + 32;
	cout << "The temperature at " << depth << " km is " << temp_c << " degrees C or " << temp_f << " degrees F." << endl << endl << endl;
	return 0;
}

int power_failure()
{
	double t_hours, t_min, t_converted, temp;

	system("cls");
	cout << "Please input the time in hours and minutes since the power failure: ";
	cin >> t_hours >> t_min;
	t_converted = (t_min*1 / 60) + t_hours;
	temp = ((4 * pow(t_converted, 2)) / (t_converted + 2)) - 20;
	cout << "The estimated temperature is " << temp << " degrees C." << endl << endl << endl;
	return 0;
}
int container_cost()
{
	const double PI = acos(-1);
	double area, radius, height, cont_number, cost_sq_cm, cont_cost, tot_cost;

	system("cls");
	cout << "Enter the radius in cm of the containers to be produced: ";
	cin >> radius;
	cout << "Enter the height in cm of the containers to be produced: ";
	cin >> height;
	cout << "Enter the cost per square cm of the material of the containers: ";
	cin >> cost_sq_cm;
	cout << "Enter the number of containers to be produced: ";
	cin >> cont_number;

	area = 2 * PI * pow(radius, 2) + 2 * PI * radius * height;
	cont_cost = area*cost_sq_cm;
	tot_cost = cont_cost*cont_number;

	cout << "The cost of each container is $" << fixed << setprecision(2) << cont_cost << endl;
	cout << "The cost for " << cont_number << " containers is $" << fixed << setprecision(2) << tot_cost << endl << endl << endl;
	
	return 0;
}

int aircraft_categories()
{
	int speed, length;
	system("cls");
	
	cout << "Enter the observed speed of the aircraft in km/h: ";
	cin >> speed;
	if (speed > 1100)
	{
		cout << "Enter the observed length of the aircraft in m: ";
		cin >> length;
		if (length > 52)
			cout << "The aircraft is civilian." << endl << endl << endl;
		else
			cout << "The aircraft is military." << endl << endl << endl;
	}
	else
		cout << "The aircraft is unknown." << endl << endl << endl;
	return 0;
}

int material_identification()
{
	int boiling_point;
	const int water_b = 100;
	const int mercury_b = 357;
	const int copper_b = 1187;
	const int silver_b = 2193;
	const int gold_b = 2660;
	double lower_bound = 0.95;
	double upper_bound = 1.05;
	system("cls");

	cout << "Enter the observed boiling point of the material: ";
	cin >> boiling_point;
	
	if (boiling_point >= water_b*lower_bound && boiling_point <= water_b*upper_bound)
		cout << "The material is water." << endl << endl << endl;
	else if (boiling_point >= (mercury_b*lower_bound) && boiling_point <= (mercury_b*upper_bound))
		cout << "The material is mercury." << endl << endl << endl;
	else if (boiling_point >= copper_b*lower_bound && boiling_point <= copper_b*upper_bound)
		cout << "The material is copper." << endl << endl << endl;
	else if (boiling_point >= silver_b*lower_bound && boiling_point <= silver_b*upper_bound)
		cout << "The material is silver." << endl << endl << endl;
	else if (boiling_point >= gold_b*lower_bound && boiling_point <= gold_b*upper_bound)
		cout << "The material is gold." << endl << endl << endl;
	else
		cout << "The material is unknown." << endl << endl << endl;
	
	return 0;
}
