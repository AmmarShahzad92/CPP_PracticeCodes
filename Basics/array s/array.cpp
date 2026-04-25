#include<iostream>
#include<String>
#include<vector>
using namespace std;
int main(){
	string a[4] = {"Taha","Nazir","Micheal", "Jones"};
	for(int i=0; i<4; i++){    //for loop 
		cout << a[i] << " ";
	}
	cout << "\n ";
	
	for (string j: a){        //for each loop
		cout << j << "\n ";
	}
	
	//dynamic aka vector array similar to  array list
	 vector<string> car;
	 car.push_back("Macklaren");
	 car.push_back("BMW");
	 car.push_back("Honda");
	 car.push_back("Black Vigo");
	 for (string k: car){
	 	cout<< k<< " ";
	 }
	return 0;
}
