#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    double grosspay,netpay,deductions,fedintax,statetax,socsectax,medtax,pension,health;
    string name;

    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Enter gross pay: ";
    cin>>grosspay;

    fedintax=0.15*grosspay;
    statetax=0.035*grosspay;
    socsectax=0.0575*grosspay;
    medtax=0.0275*grosspay;
    pension=0.05*grosspay;
    health=75.00;
    deductions=fedintax+statetax+socsectax+medtax+pension+health;
    netpay=grosspay-deductions;

    cout<<endl<<endl<<name<<endl;
    cout<<left<<setw(20)<<"Gross Amount="<<right<<setw(20)<<"$"<<grosspay<<endl;

    cout<<left<<setw(20)<<"Federal Income Tax="<<right<<setw(20)<<"$"<<fedintax<<endl;

    cout<<left<<setw(20)<<"State Tax="<<right<<setw(20)<<"$"<<statetax<<endl;

    cout<<left<<setw(20)<<"Social Security tax="<<right<<(20)<<"$"<<socsectax<<endl;

    cout<<left<<setw(20)<<"Medicare Tax="<<right<<setw(20)<<"$"<<medtax<<endl;

    cout<<left<<setw(20)<<"Pension Plan="<<right<<setw(20)<<"$"<<pension<<endl;

    cout<<left<<setw(20)<<"Health Insurance="<<right<<setw(20)<<"$"<<health<<endl;

    cout<<left<<setw(20)<<"Deductions="<<right<<setw(20)<<"$"<<deductions<<endl;

    cout<<left<<setw(20)<<"Net pay="<<right<<setw(20)<<"$"<<netpay<<endl;

}
