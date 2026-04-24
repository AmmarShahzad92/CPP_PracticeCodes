#include <iostream>
#include <String>
using namespace std;
int main(){
	double age = 19.5;
	string name = "Taha";
	
	cout << "hello world\n";
	cout << "Name: " << name << "\nage: "<<age;
	
	int a=5, b=466, c=19;       //multi variable
	cout<< a<<" "<<b<<" "<<c;
	
	const int time = 19;// remove the comment and see it will not override it 
	// int time = 16;
	int minutes = 60;
	cout<< time * minutes<<"\n\n";
	
	// taking input
	int x;
	cin >> x;
	cout<< x;
	
	//string concatination
	string d = "Muhammad";
    string e = "Taha";
    string f = d+ " "+ e;
	cout<< f;
	cout<< f.length() << "\n";  //find the length of the text
	cout<< f.size();

	return 0;
}

