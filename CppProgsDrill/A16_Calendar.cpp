#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    char choice;
    cout<<"Press 1 for year"<<endl;
    cout<<"Press 2 for Months"<<endl;
    cout<<"Press 3 for day"<<endl;
    cout<<"Choice: ";
    cin>>choice;

    if(choice=='1')
    {
    	int year;

    	cout<<"Enter the year: ";
    	cin>>year;
    	if (year%4==0)
    	{
    		cout<<"It is a leap year"<<endl;
		}
		else
		{
			cout<<"It is not a leap year"<<endl;
		}
	}
	else if (choice=='2')
	{
		string month;
		cout<<"Enter the month name: ";
		cin>>month;
		if (month=="january" || month=="January")
		{
			cout<<"It has 31 days"<<endl;
		}
		else if (month=="February" || month=="february")
		{
			cout<<"It has 28 days"<<endl;
		}
		else if (month=="March" || month=="march")
		{
			cout<<"It has 31 days"<<endl;
		}
		else if (month=="April" || month=="april")
		{
			cout<<"It has 30 days"<<endl;
		}
		else if (month=="May" || month=="may")
		{
			cout<<"It has 31 days"<<endl;
		}
		else if (month=="June"|| month=="june")
		{
			cout<<"It has 30 days"<<endl;
		}
		else if (month=="July"||month=="july")
		{
			cout<<"It has 31 days"<<endl;
		}
		else if (month=="August"|| month=="august")
		{
			cout<<"It has 31 days"<<endl;
		}
		else if (month=="September" || month=="september")
		{
			cout<<"It has 30 days"<<endl;
		}
		else if (month=="October" || month=="october")
		{
			cout<<"It has 31 days"<<endl;
		}
		else if (month=="november" || month=="November")
		{
			cout<<"It has 30 days"<<endl;
		}
		else if (month=="December" || month=="december")
		{
			cout<<"It has 31 days"<<endl;
		}
		else
		{
			cout<<"Invalid month name"<<endl;
		}
	}
	else if (choice=='3')
	{
		string day;
		cout<<"Enter the day: ";
		cin>>day;
		if (day=="Monday" || day=="monday" ||day=="Tuesday" ||day=="tuesday" ||day=="Wednesday" || day=="wednesday" ||day=="Thursday" ||day=="thursday" || day=="Friday" || day=="friday")
		{
			cout<<"The day is a weekday"<<endl;
		}
		else if (day=="Sunday" || day=="sunday" || day=="Saturday" || day=="saturday")
		{
			cout<<"The day is a weekend"<<endl;
		}
		else
		{
			cout<<"Invalid day"<<endl;
		}
	}

    else
    {
    	cout<<"Invlaid input"<<endl;
	}
	return 0;
}

