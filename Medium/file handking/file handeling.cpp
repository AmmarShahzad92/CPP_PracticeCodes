// creating files
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

//creating file
int main(){
	ofstream file("file.txt");
	file<< "This is sample products";
	file.close();
	
	//printing file
	string filep;
	ifstream files("file.txt");
	while(getline(files, filep)){
		cout << filep;
	}
	return 0;
}
