#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void appendHomeStyle(){
    cout<<"Welcome to Johnny Home Designs! Please enter the style that you want to add to the catalog:"<<endl;
    string read;
    ofstream outFile("home_styles.txt",ios::app);
    getline(cin,read);
    outFile<<read<<endl;
    outFile.close();
    return;
}
void displayCatalog(){
    cout<<"Displaying Catalog:"<<endl;
    string read;
    ifstream inFile("home_styles.txt",ios::ate|ios::in);
    if(!inFile.is_open()){
        cout<<"Error in opening file.";
    }else{
        inFile.seekg(0);
        while(getline(inFile,read)){
         cout<<read<<endl;
    }
    inFile.close();
}
return;
}
int main(){
    appendHomeStyle();
    displayCatalog();
    return 0;
}


