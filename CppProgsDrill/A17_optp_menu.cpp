#include <cstring>
#include <iostream>
using namespace std;
int main () {
    cout << "       OPTP Menu      " << endl;
    cout << "1-Fries " << endl;
    cout << "2-Mexican Quesadilla " << endl;
    cout << "3-Fried Chicken " << endl;
    cout << "4-Burgers " << endl;
    cout << "" << endl;
    cout << "Enter your Choice : ";
    int mainchoice, category, flavor, size, subtotal, taxapplied, totalbill, addonsbill, addonstax, addonstotal;
    char addchoice;
    string mainchoicename, categoryname, sizename, flavorname;
    cin >> mainchoice;
    cout << "" << endl;
    addonsbill=0;
    switch (mainchoice) {
    case 1:
        mainchoicename ="Fries";
        cout << "       Fries Category      " << endl;
        cout << "1-handcut fries" << endl;
        cout << "2-pizza fries " << endl;
        cout << "3-nuggets with fries " << endl;
        cout << "4-make combo (1 reg fries + 1 drink (Rs.149 + Tax))" << endl;
        cout << "" << endl;
        cout << "Enter fries category : ";
        cin >> category;
        cout << "" << endl;
        if (category==1) {
            categoryname="Handcut Fries";
            cout << "           Handcut Fries       " << endl;
            cout << "1-Plain/Masala     (Regular-Rs.149 , Orignal-Rs.199 , Jumbo-Rs.249)" << endl;
            cout << "2-Masala Tangy     (Orignal-Rs.269 , Jumbo-Rs.319)" << endl;
            cout << "3-BBQ              (Orignal-Rs.269 , Jumbo-Rs.319)" << endl;
            cout << "4-Garlic Mayo      (Orignal-Rs.269 , Jumbo-Rs.319)" << endl;
            cout << "5-Hot Garlic Mayo  (Orignal-Rs.269 , Jumbo-Rs.319)" << endl;
            cout << "6-Cheddar Cheese   (Orignal-Rs.339 , Jumbo-Rs.389)" << endl;
            cout << "" << endl;
            cout << "Enter Handcut Fries Flavor : ";
            cin >> flavor;
            cout << "" << endl;

            if      (flavor==1) {flavorname="Plain/Masala";}
            else if (flavor==2) {flavorname="Masala Tangy";}
            else if (flavor==3) {flavorname="BBQ";}
            else if (flavor==4) {flavorname="Garlic Mayo";}
            else if (flavor==5) {flavorname="hot garlic mayo";}
            else if (flavor==6) {flavorname="Cheddar cheese";}
            else {cout << "Invalid Choice !" << endl;}


            if      (flavor==1) {
                cout << "Enter fries size (1-Regular, 2-Orignal, 3-Jumbo) : ";
                cin >> size;
                if (size==1) {
                    subtotal =149;
                    sizename="Regular";
                }
                else if (size==2) {
                    subtotal=199;
                    sizename="Orignal";
                }
                else if (size==3) {
                    subtotal=249;
                    sizename="Jumbo";
                }
                else {cout << "Invalid choice !";}
            }
            else if (flavor==2 || flavor==3 || flavor==4 || flavor==5) {
                cout << "Enter fries size (1-Orignal, 2-Jumbo) : ";
                cin >> size;
                if (size==1) {
                    subtotal=269;
                    sizename="Orignal";
                }
                else if (size==2) {
                    subtotal=319;
                    sizename="Jumbo";
                }
            }
            else if (flavor==6) {
                cout << "Enter fries size (1-Orignal, 2-Jumbo) : ";
                cin >> size;
                if (size==1) {
                    subtotal=339;
                    sizename="Orignal";
                }
                else if (size==2) {
                    subtotal=389;
                    sizename="Jumbo";
                }
            }
            else {cout << "Invalid Choice !" << endl;}
        }
        else if (category==2) {
            categoryname="Pizza Fries";
            cout << "       Pizza Fries       " << endl;
            cout << "1-Cheese           (Rs.349 + Tax)" << endl;
            cout << "2-Smoked Chicken   (Rs.399 + Tax)" << endl;
            cout << "" << endl;
            cout << "Enter Pizza Fries Flavor : ";
            cin >> flavor;
            cout << "" << endl;
            if (flavor==1) {
                subtotal=349;
                flavorname="Cheese";
            }
            else if (flavor==2) {
                subtotal=399;
                flavorname="Smocked Chicken";
            }
            else {cout << "Invalid Choice !" << endl;}
        }
        else if (category==3) {
            categoryname="Nuggets with Fries";
            cout << "           Nuggets with Fries - Size       " << endl;
            cout << "1-Orignal  (6pcs - Rs.399 + Tax)" << endl;
            cout << "2-Jumbo    (12pcs- Rs.599 + Tax)" << endl;
            cout << "" << endl;
            cout << "           Nuggets with Fries - Flavor       " << endl;
            cout << "1-Ketchup" << endl;
            cout << "2-Tangy" << endl;
            cout << "3-BBQ" << endl;
            cout << "4-Garlic Mayo" << endl;
            cout << "5-Hot Garlic Mayo" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=399;
                sizename="Orignal  (6pcs - Rs.399 + Tax)";
            }
            else if (size==2) {
                subtotal=599;
                sizename="Jumbo    (12pcs- Rs.599 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }

            if (size==1 || size==2) {
                cout << "Enter Nuggets with Fries Flavor : ";
                cin >> flavor;
                cout << "" << endl;

                if      (flavor==1) { flavorname="Ketchup"; }
                else if (flavor==2) { flavorname="Tangy"; }
                else if (flavor==3) { flavorname="BBQ"; }
                else if (flavor==4) { flavorname="Garlic Mayo"; }
                else if (flavor==5) { flavorname="Hot Garlic Mayo"; }
                else {cout << "Invalid Choice !" << endl;}
                if (flavor==1 || flavor==2 || flavor==3 || flavor==4 || flavor==5) {
                    cout << "Do you want to add on cheddar cheese (Rs.70 + Tax) ? (Y/N)";
                    cin >> addchoice;
                    cout << "" << endl;
                    if (addchoice=='Y' || addchoice=='y') { addonsbill=70; }
                    else if (addchoice=='n' || addchoice=='N') { addonsbill=0; }
                    else { cout << "Invalid Choice !" << endl; }
                }
                else {cout << "Invalid Choice !" << endl;}
            }
            else {cout << "Invalid Choice !" << endl;}
        }
        else if (category==4) {
            subtotal=149;
            categoryname="Make Combo";
        }
        else {cout << "Invalid Choice!";}
        break;
    case 2:
        mainchoicename="Mexican Quesadilla";
        cout << "       Mexican Quesadilla Category          " << endl;
        cout << "1-Chicken Quesadilla   (Rs.199 + Tax)" << endl;
        cout << "2-Beef Quesadilla      (Rs.349 + Tax)" << endl;
        cout << "" << endl;
        cout << "Enter Mexican Quesadilla Category : ";
        cin >> category;
        cout << "" << endl;
        if (category==1) {
            categoryname="Chicken Quesadilla";
            subtotal=199;
        }
        else if (category==2) {
            categoryname="Beef Quesadilla";
            subtotal=349;
        }
        else {cout << "Invalid Choice !";}
        if (category==1 || category==2) {
            cout << "Do you want to add on salsa (Rs.50 + Tax) ? (Y/N)";
            cin >> addchoice;
            cout << "" << endl;
            if (addchoice=='Y' || addchoice=='y') { addonsbill=50; }
            else if (addchoice=='n' || addchoice=='N') { addonsbill=0; }
            else { cout << "Invalid Choice !" << endl; }
        }
        else {cout << "Invalid Choice !";}
        break;
    case 3:
        mainchoicename="Fried Chicken";
        cout << "       Fried Chicken Category          " << endl;
        cout << "1-Chicken Wings" << endl;
        cout << "2-Chicken Broast" << endl;
        cout << "" << endl;
        cout << "Enter fried Chicken category : ";
        cin >> category;
        cout << "" << endl;
        if (category==1) {
            categoryname="Chicken Wings";
            cout << "           Chicken Wings - Size       " << endl;
            cout << "1-Orignal  (6pcs - Rs.349 + Tax)" << endl;
            cout << "2-Jumbo    (12pcs- Rs.599 + Tax)" << endl;
            cout << "" << endl;
            cout << "           Chicken Wings - Flavor       " << endl;
            cout << "1-Masala/Crispy" << endl;
            cout << "2-Masala/Tangy" << endl;
            cout << "3-BBQ" << endl;
            cout << "4-Garlic Mayo" << endl;
            cout << "5-Hot Garlic Mayo" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=349;
                sizename="Orignal  (6pcs - Rs.349 + Tax)";
            }
            else if (size==2) {
                subtotal=599;
                sizename="Jumbo    (12pcs- Rs.599 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }

            if (size==1 || size==2) {
                cout << "Enter Chicken Wings Flavor : ";
                cin >> flavor;
                cout << "" << endl;
                if      (flavor==1) { flavorname="Masala/Crispy"; }
                else if (flavor==2) { flavorname="Masala/Tangy"; }
                else if (flavor==3) { flavorname="BBQ"; }
                else if (flavor==4) { flavorname="Garlic Mayo"; }
                else if (flavor==5) { flavorname="Hot Garlic Mayo"; }
                else {}

                cout << "Do you want to add on cheddar cheese (Rs.70 + Tax) ? (Y/N)";
                cin >> addchoice;
                cout << "" << endl;
                if (addchoice=='Y' || addchoice=='y') { addonsbill=70; }
                else if (addchoice=='n' || addchoice=='N') { addonsbill=0; }
                else { cout << "Invalid Choice !" << endl; }
            }
            else {cout << "Invalid Choice !" << endl;}
            }
        else if (category==2) {
            categoryname="Chicken Broast";
            cout << "           Chicken Broast - Size       " << endl;
            cout << "1-Leg Qtr      (2pcs - Rs.299 + Tax)" << endl;
            cout << "2-Chest Qtr    (3pcs - Rs.349 + Tax)" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=299;
                sizename="Leg Qtr      (2pcs - Rs.299 + Tax)";
            }
            else if (size==2) {
                subtotal=349;
                sizename="Chest Qtr    (3pcs - Rs.349 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }
        }
        else {cout << "Invalid Choice !";}
        break;
    case 4:
        mainchoicename="Burgers";
        cout << "                   Burgers Category          " << endl;
        cout << "1-Shot Gun Burger                  (1-Orignal-Rs.199 , 2-Spicy-Rs.199      +Tax)" << endl;
        cout << "2-GMC Chicken Burger               (1-Orignal-Rs.249 , 2-Spicy-Rs.249      +Tax)" << endl;
        cout << "3-Zing Burger                      (1-Small-Rs.399 , 2-Big-Rs.549          +Tax)" << endl;
        cout << "4-Premium Grilled Chicken Burger   (1-Classic-Rs.299 , 2-Jalepeno-Rs.349   +Tax)" << endl;
        cout << "5-Philly Burger                    (1-Chicken-Rs.349 , 2-Beef-Rs.399       +Tax)" << endl;
        cout << "Smash Beef Burger   (1-Single-Rs.249 , 2-Double-Rs.399 , 3-Triple-Rs.549   +tax)" << endl;
        cout << "" << endl;
        cout << "Enter Burger Category : ";
        cin >> category;
        cout << "" << endl;
        if (category==1) {
            categoryname="Shot Gun Burger";
            cout << "           Shot Gun Burger - size       " << endl;
            cout << "1-Orignal  (Rs.199 + Tax)" << endl;
            cout << "2-Spicy    (Rs.199 + Tax)" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=199;
                sizename="Orignal  (Rs.199 + Tax)";
            }
            else if (size==2) {
                subtotal=199;
                sizename="Spicy    (Rs.199 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }
        }
        else if (category==2) {
            categoryname="GMC Chicken Burger";
            cout << "           GMC Chicken Burger - Size       " << endl;
            cout << "1-Orignal  (Rs.249 + Tax)" << endl;
            cout << "2-Spicy    (Rs.249 + Tax)" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=249;
                sizename="Orignal  (Rs.249 + Tax)";
            }
            else if (size==2) {
                subtotal=249;
                sizename="Spicy    (Rs.249 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }
        }
        else if (category==3) {
            categoryname="Zing Burger";
            cout << "           Zing Burger - Size       " << endl;
            cout << "1-Small  (Rs.399 + Tax)" << endl;
            cout << "2-Big    (Rs.549 + Tax)" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=399;
                sizename="Small  (Rs.399 + Tax)";
            }
            else if (size==2) {
                subtotal=549;
                sizename="Big    (Rs.549 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }
        }
        else if (category==4) {
            categoryname="Premium Grilled Chicken Burger";
            cout << "           Premium Grilled Chicken Burger - Size       " << endl;
            cout << "1-Classic    (Rs.299 + Tax)" << endl;
            cout << "2-Jalepeno   (Rs.349 + Tax)" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=299;
                sizename="Classic    (Rs.299 + Tax)";
            }
            else if (size==2) {
                subtotal=349;
                sizename="Jalepeno   (Rs.349 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }
        }
        else if (category==5) {
            categoryname="Philly Burger";
            cout << "           Philly Burger - Size       " << endl;
            cout << "1-Chicken    (Rs.349 + Tax)" << endl;
            cout << "2-Beef       (Rs.399 + Tax)" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=349;
                sizename="Chicken    (Rs.349 + Tax)";
            }
            else if (size==2) {
                subtotal=399;
                sizename="Beef       (Rs.399 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }
        }
        else if (category==6) {
            categoryname="Smash Beef Burger";
            cout << "           Smash Beef Burger - Size       " << endl;
            cout << "1-Single    (Rs.249 + Tax)" << endl;
            cout << "2-Double    (Rs.399 + Tax)" << endl;
            cout << "3-Triple    (Rs.549 + Tax)" << endl;
            cout << "" << endl;
            cout << "Enter Order size : ";
            cin >> size;
            cout << "" << endl;
            if (size==1) {
                subtotal=249;
                sizename="Single    (Rs.249 + Tax)";
            }
            else if (size==2) {
                subtotal=399;
                sizename="Double    (Rs.399 + Tax)";
            }
            else if (size==3) {
                subtotal=549;
                sizename="Triple    (Rs.549 + Tax)";
            }
            else { cout << "invalid Choice !" << endl; }

            if (size==1 || size==2 || size==3) {
                cout << "Do you want to add on cheddar cheese (Rs.100 + Tax) ? (Y/N)";
                cin >> addchoice;
                cout << "" << endl;
                if (addchoice=='Y' || addchoice=='y') { addonsbill=100; }
                else if (addchoice=='n' || addchoice=='N') { addonsbill=0; }
                else { cout << "Invalid Choice !" << endl; }
            }
        }
        else {cout << "Invalid Choice !";}
        break;
    default:
        cout << "Invalid Choice !" << endl;
    }
    addonstax=0.16*addonsbill;
    addonstotal=addonsbill+addonstax;
    cout << "" << endl;
    cout << "Rs." << addonstotal << " Added to bill" << endl;
    cout << "" << endl;
    taxapplied=0.16*subtotal;
    cout << "You have selected : " << mainchoicename << " - " << categoryname << " - " << flavorname << " - " << sizename << endl;
    cout << "" << endl;
    cout << "Your subtotal bill is : Rs." << subtotal << endl;
    cout << "Tax applied is : Rs." << taxapplied << endl;
    cout << "Add ons bill is : Rs." << addonsbill << endl;
    cout << "Add ons tax is : Rs." << addonstax << endl;
    cout << "Add ons Total is : Rs." << addonstotal << endl;
    cout << "" << endl;
    totalbill=subtotal+taxapplied+addonstotal;
    cout << "Your total bill is : Rs." << totalbill << endl;
    return 0;
}
