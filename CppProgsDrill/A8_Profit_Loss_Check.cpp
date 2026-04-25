#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    cout<<"Profit/Loss Check" << endl;
    double sp, cp, profit, loss;
    cout<<"Enter Cost Price = ";
    cin>>cp;
    cout<<"Enter Sales Price = ";
    cin>>sp;
    if (sp>cp) {
        profit=sp-cp;
        cout<<left<<setw(20)<<"Cost Price"<<right<<setw(20)<<"= Rs."<<cp<<endl;
        cout<<left<<setw(20)<<"Sales Price"<<right<<setw(20)<<"= Rs."<<sp<<endl;
        cout<<left<<setw(20)<<"Profit"<<right<<setw(20)<<"+ 50Rs."<<profit<<endl;
    }
    else if (cp>sp) {
        loss = cp-sp;
        cout<<left<<setw(20)<<"Cost Price"<<right<<setw(20)<<"= Rs."<<cp<<endl;
        cout<<left<<setw(20)<<"Sales Price"<<right<<setw(20)<<"= Rs."<<sp<<endl;
        cout<<left<<setw(20)<<"Loss"<<right<<setw(20)<<"- Rs."<<loss<<endl;
    }
    else {
        cout << "No profit no loss...!" << endl;
    }
}
