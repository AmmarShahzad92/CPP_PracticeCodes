#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	char operation;

	cout<<"Enter an operator (+, -, / , *): ";
	cin>>operation;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;

	switch(operation)
	{
		case '+':
			{
				cout<<a<<" + "<<b<<" = "<<a+b<<endl;
				break;
			}
		case '-':
			{
				cout<<a<<" - "<<b<<" = "<<a-b<<endl;
				break;
			}
		case '/':
			{
				cout<<a<<" / "<<b<<" = "<<a/b<<endl;
				break;
			}
		case '*':
			{
				cout<<a<<" * "<<b<<" = "<<a*b<<endl;
				break;
			}
		default:
			{
				cout<<"INVALID OPERATOR"<<endl;
			}
	}
	return 0;
}

