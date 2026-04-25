#include <iostream>
using namespace std;
int main ()
{
	int a, b, c;
	cout<<"Enter the first number= ";
	cin>>a;
	cout<<"Enter the second number= ";
	cin>>b;
	cout<<"Enter Third Number= ";
	cin>>c;

	if(a>b && a>c && b>c){
        cout<<"The numbers in order are "<<c<<" , "<<b<<" , "<<a<<endl;	}
    else if (a>b && a>c && c>b) {
        cout<<"The numbers in order are "<<b<<" , "<<c<<" , "<<a<<endl;	}

    else if (b>a && b>c && a>c) {
        cout<<"The numbers in order are "<<c<<" , "<<a<<" , "<<b<<endl;	}
    else if (b>a && b>c && c>a) {
        cout<<"The numbers in order are "<<a<<" , "<<c<<" , "<<b<<endl;	}
    else if (c>a && c>b && a>b) {
        cout<<"The numbers in order are "<<b<<" , "<<a<<" , "<<c<<endl;	}
    else if (c>a && c>b && b>a) {
        cout<<"The numbers in order are "<<a<<" , "<<b<<" , "<<c<<endl;	}

	return 0;
}

