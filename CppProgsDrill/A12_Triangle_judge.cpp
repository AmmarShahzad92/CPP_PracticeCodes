#include <iostream>
using namespace std;
int main ()
{
	int a, b, c;
	cout<<"Enter the first side length= ";
	cin>>a;
	cout<<"Enter the second side length= ";
	cin>>b;
	cout<<"Enter the third side length= ";
	cin>>c;

	if(a==b && b==c && a==c){
        cout<<"This is an equilateral triangle"<<endl;	}
    else if ((a==b && b!=c && a!=c) || (a==c && b!=c && b!=a) || (b==c && a!=b && a!=c)) {
        cout<<"This is an isosceles triangle"<<endl;	}
    else if (a!=b && b!=c && a!=c) {
        cout<<"This is a scalene triangle"<<endl;	}
	return 0;
}


