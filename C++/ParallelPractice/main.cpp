#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{

    string menuItems[5] = {"Burger", "Fries", "Pop", "Shake", "Exit"};
    float prices[5] = {5.99, 1.49, .99, 2.49, 0.0};
    bool exitStatus = false;
    int customerChoice;
    float totalPrice = 0.0;
    int itemQuantity;

    cout << "The menu is: "
         << "\nBurger: $5.99 "
         << "\nFries: $1.49 "
         << "\nPop: $.99 "
         << "\nShake $$2.49"
         << endl << endl;

    while(exitStatus != true){

        cout << "What would you like to order?"
         << "1: Burger, 2: Fries, 3: Pop, 4: Shake, 5:Exit \n";

         cin >> customerChoice;

         if(customerChoice == 5){
            exitStatus = true;
         }
         else{
            cout << "How many would you like? \n";
            cin >> itemQuantity;

            totalPrice += prices[customerChoice - 1] * itemQuantity;
         }

    }

    cout << "Your total is: $" << totalPrice << endl;
    cout << "Thank you, come again!" << endl;

}
