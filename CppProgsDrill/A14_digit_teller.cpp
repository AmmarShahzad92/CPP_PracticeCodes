#include <iostream>
using namespace std;
int main ()
{
	int digit;
	cout<<"Enter a digit : ";
	cin>>digit;

	if (digit<=9 && digit>=0)
	{
		if (digit==0)
		{
			cout<<"zero"<<endl;
		}
		else if (digit==1)
		{
			cout<<"one"<<endl;
		}
		else if (digit==2)
		{
			cout<<"two"<<endl;
		}
		else if (digit==3)
		{
			cout<<"three"<<endl;
		}
		else if (digit==4)
		{
			cout<<"four"<<endl;
		}else if (digit==5)
		{
			cout<<"five"<<endl;
		}
		else if (digit==6)
		{
			cout<<"six"<<endl;
		}
		else if (digit==7)
		{
			cout<<"seven"<<endl;
		}
		else if (digit==8)
		{
			cout<<"eight"<<endl;
		}
		else if (digit==9)
		{
			cout<<"nine"<<endl;
		}
	}
	else
	{
		cout<<"Invalid Digit Input"<<endl;
	}
	return 0;
}
