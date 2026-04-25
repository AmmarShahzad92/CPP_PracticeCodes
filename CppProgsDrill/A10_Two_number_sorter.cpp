#include <iostream>
using namespace std;
int main ()
{
	int num1, num2;
	cout<<"Enter the first number= ";
	cin>>num1;
	cout<<"Enter the second number= ";
	cin>>num2;
	if(num1<num2){
        cout<<"The numbers in order are "<<num1<<" , "<<num2<<endl;	}
    else if (num1==num2) {
        cout<<"Both Numbers are equal "<<num1<<" , "<<num2<<endl;	}
    else {
	cout<<"The numbers in order are "<<num2<<" , "<<num1<<endl;	}
	return 0;
}
