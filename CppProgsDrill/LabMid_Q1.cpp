#include <iostream>
using namespace std;
int main() {
    int choice, foodPrice;
    cout << "Welcome to the vacation planner!" << endl;
    cout << "Choose your destination:" << endl;
    cout << "1. Paris" << endl;
    cout << "2. Tokyo" << endl;
    cout << "3. New York" << endl;
    cout << "4. Dubai" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "You've selected Paris!" << endl;
        cout << "Paris is known for its beautiful Ambiance, Eiffel Town, and delicious pastries." << endl;
        cout << "Enter food price in Euro = ";
        cin >> foodPrice;
        if (foodPrice>=0 && foodPrice<=30) {
            cout << "Dish you can enjoy = Baquette" << endl;
        }
        else if (foodPrice>30 && foodPrice<=60) {
            cout << "Dish you can enjoy = Parisian Honey" << endl;
        }
        else if (foodPrice>60) {
            cout << "Dish you can enjoy = Croissants and Macarons" << endl;
        }
        else {
            cout << "Invalid amount!" << endl;
        }
        break;
    case 2:
        cout << "You've selected Tokyo!" << endl;
        cout << "Tokyo offers a blend of tradition and modernity, with vibrant neighborhoods and amazing cuisine." << endl;
        cout << "Enter food price in Yen= ";
        cin >> foodPrice;
        if (foodPrice>=0 && foodPrice<=120) {
            cout << "Dish you can enjoy = Edomae Tempura" << endl;
        }
        else if (foodPrice>120 && foodPrice<=180) {
            cout << "Dish you can enjoy = Sushi" << endl;
        }
        else if (foodPrice>180) {
            cout << "Dish you can enjoy = Soba" << endl;
        }
        else {
            cout << "Invalid amount!" << endl;
        }
        break;
    case 3:
        cout << "You've selected New York!" << endl;
        cout << "New York city is famous for its iconic landmarks, Broadway shows, and diverse culture." << endl;
        cout << "Enter food price in $= ";
        cin >> foodPrice;
        if (foodPrice>=0 && foodPrice<=60) {
            cout << "Dish you can enjoy = Bagels" << endl;
        }
        else if (foodPrice>60 && foodPrice<=70) {
            cout << "Dish you can enjoy = Pizza" << endl;
        }
        else if (foodPrice>70 && foodPrice<=250) {
            cout << "Dish you can enjoy = Pastrami" << endl;
        }
        else {
            cout << "Invalid amount!" << endl;
        }
        break;
    case 4:
        cout << "You've selected Dubai!" << endl;
        cout << "Dubai boasts luxurious shopping, stunning architecture, and desert adventures." << endl;
        cout << "Enter food price in Dirham= ";
        cin >> foodPrice;
        if (foodPrice>=35 && foodPrice<=65) {
            cout << "Dish you can enjoy = Harees" << endl;
        }
        else if (foodPrice>65 && foodPrice<=105) {
            cout << "Dish you can enjoy = Meat Biryani" << endl;
        }
        else if (foodPrice>105) {
            cout << "Dish you can enjoy = Oozie" << endl;
        }
        else {
            cout << "Invalid amount!" << endl;
        }
        break;
    default:
        cout << "Invalid amount. Please select a valid destination (1-4)" << endl;
        break;
    }
}
