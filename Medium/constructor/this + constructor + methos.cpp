#include<iostream>
#include<string>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int year;
	car(string brand, string model, int year){
		this->brand = brand;
		this->model = model;
		this->year = year;
	}
	void display(){
		cout << brand << " ";
		cout << model << " ";
		cout << year << " ";
	}
	
};

int main(){
	car c1("ford","v8",2032);
	c1.display();
	cout << "\n";
	
	car c2("Civics","v12",2052);
	c2.display();
	cout << "\n";
	return 0;
}
