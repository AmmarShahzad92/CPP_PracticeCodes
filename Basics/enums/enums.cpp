//enums
#include<iostream>
#include<String>
using namespace std;

enum level { // similar to that of a structure but have fixed vlues and enum
	LOW = 1,
	MEDIUM = 2,
	HIGH = 5
};

int main(){
	enum level a = MEDIUM;
	switch(a){
		case 1:
			cout << "low level";
			break;
		case 2:
			cout <<"medium";
			break;
		case 5:
			cout << "high";
			break;
	}
}
