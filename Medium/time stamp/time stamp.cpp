#include<iostream>
#include<ctime>
using namespace std;

int main(){
	// current date and time
	time_t timestamp;
	time(&timestamp);
	cout << ctime(&timestamp);
}
