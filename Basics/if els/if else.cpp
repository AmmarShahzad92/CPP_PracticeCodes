#include <iostream>
#include <String>
#include <cmath>
using namespace std;

int main(){
int a = 10, b=50;
if (a>b){
	cout<<"A is greater than B: "<< a;
}
else if (a==b){
	cout<< "Both are equals:" << a <<" = "<<b;
}
else{
	cout<<"B is greater than A: "<< b;
}

// task 0
string s = (b>=a) ? "Yes" : "No";
cout << "\n" << s;
return 0;
}

