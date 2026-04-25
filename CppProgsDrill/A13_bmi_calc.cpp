#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main ()
{
	double weight;
	double height;
	double bmi;

	cout<<"Enter your weight in pounds = ";
	cin>>weight;
	cout<<"Enter your height in inches = ";
	cin>>height;
	bmi=(703*weight)/(height*height);

	if(bmi<18.5) {
        cout<<"BMI : "<<bmi<<endl;
        cout<<"Weight Status : UNDERWEIGHT"<<endl;	}
	else if (bmi>=18.5 && bmi<=24.9) {
        cout<<"BMI : "<<bmi<<endl;
        cout<<"Weight Status : NORMAL"<<endl;	}
	else if (bmi>=25 && bmi<=29.9) {
        cout<<"BMI : "<<bmi<<endl;
        cout<<"Weight Status : OVERWEIGHT"<<endl;	}
	else {
        cout<<"BMI : "<<bmi<<endl;
        cout<<"Weight Status : OBESE"<<endl;	}

	return 0;
}

