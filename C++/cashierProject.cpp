#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numOfItems;
    float itemPrice;
    int itemQuantity;
    float totalPrice;
    float customerAmount;
    float changeBack;

    //Ask how many items the customer has
    cout << "How many items do you have?" << endl;
    cin >> numOfItems;

    for(int i = 0; i < numOfItems; i++){

        cout << "What is the price of the item?" << endl;
        cin >> itemPrice;

        cout << "How many do you have?" << endl;
        cin >> itemQuantity;

        totalPrice += itemPrice*itemQuantity;

    }

    cout << "Your total price is: " << totalPrice << endl;

    cout << "How much cash are you giving to pay?" << endl;
    cin >> customerAmount;

    changeBack = customerAmount - totalPrice;

    cout << " Your change is: " << endl;
    cout << "Total Change: " << changeBack <<endl;

    //Check # dollars to return
    int dollarsBack = floor(changeBack);
    int extraChange = (changeBack - dollarsBack)*100 + 1;

    //Check # quarters to return
    int quartersBack = floor(extraChange / 25);

    if(quartersBack > 0){
        extraChange = extraChange % 25;
    }

    //Check # dimes to return
    int dimesBack = floor(extraChange / 10);

    if(dimesBack > 0){
        extraChange = extraChange % 10;
    }

    //Check # nickers to return
    int nickelsBack = floor(extraChange / 5);

    if(nickelsBack > 0){
        extraChange = extraChange % 5;
    }

    int penniesBack = extraChange;

    cout << dollarsBack << " dollars" << endl;
    cout << quartersBack << " quarters" << endl;
    cout << dimesBack << " dimes" << endl;
    cout << nickelsBack << " nickels" << endl;
    cout << penniesBack << " pennies" << endl;

    return 0;

}
