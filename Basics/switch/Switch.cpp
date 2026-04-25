#include <iostream>
#include <cmath>
#include <String>
using namespace std;
int main(){
	char a;
    cin>> a;
    
	switch (a){
		case'Monday':
			cout<< "First day of the week";
			break;
			
		case 'Tuesday':
			cout<< "Second day of the week";
			break;
			
		case 'Wednesday':
			cout<< "Third day of the week";
			break;
			
		case 'Thrusday':
			cout<< "Fourth day of the week";
			break;
			
		case 'Friday':
			cout<< "Fifth day of the week";
			break;
			
		case 'Saturday':
			cout<< "Sixth day of the week";
			break;
			
		case 'Sunday':
			cout<< "Seventh day of the week";
			break;
			
		default:
			cout<<"No further data: ??";
	}
	return 0;
}
