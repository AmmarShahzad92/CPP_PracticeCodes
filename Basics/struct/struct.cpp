//structure in c++
#include <iostream>
#include <String>
using namespace std;

struct{
	string model;
	string brand;
	int year;
}car,bike;
int main(){
	// car c1; better to use structure for different variables 
	car.brand = "Farari";
	car.model = "v5";
	car.year = 2025;
	cout << car.brand <<" "<< car.model << " " <<car.year<< "\n";
	
	car.brand = "Ford";
	car.model = "V12 8L";
	car.year = 2056;
	cout << car.brand <<" "<< car.model << " " <<car.year<< "\n";
	
	bike.model= "V3";
	bike.brand = "Honda";
	bike.year = 2023;
	cout << bike.brand <<" "<< bike.model << " " <<bike.year;
	return 0;
}
