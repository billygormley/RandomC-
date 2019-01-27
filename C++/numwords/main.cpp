#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Function defined below
string getValue(int n);
int getLength(int n);
string intToString(int n);
vector <int> integerToArray(int x);

int main()
{

    int num1 = 345;

    printf("num1 is: %d , %s", num1, getValue(num1).c_str() );

}

//Function that inputs number and returns length
int getLength(int n){

    int len = 1;

    if(n > 9){
        for(len = 0; n > 0; len++){
            n = n / 10;
        }
    }

    return len;
}

//Function that inputs num and builds/returns string to main
string getValue(int n){

    int length = getLength(n);
    string numString = "";

    if(length <= 4){

        string numIds[2] = {"thousand", "hundred"};

        vector<int> numVector = integerToArray(n);
        std::vector<int>::iterator it = numVector.begin();

        for(it; it != numVector.end() - 2; ++it){

            string elementString = intToString(*it) + numIds[*it];
            numString += elementString;
        }
    }
    else{ numString = "Length of number too long";
    }

    return numString;

}

//Used to turn a 1-digit number into string form.
string intToString(int n){

    string returnString = "";

    if (n == 1){returnString = "one ";}
    else if (n == 2){returnString = "two ";}
    else if (n == 3){returnString = "three ";}
    else if (n == 4){returnString = "four ";}
    else if (n == 5){returnString = "five ";}
    else if (n == 6){returnString = "six ";}
    else if (n == 7){returnString = "seven ";}
    else if (n == 8){returnString = "eight ";}
    else if (n == 9){returnString = "nine ";}
    else{returnString = "";}

    return returnString;

}

//Takes number and returns a vector of the digits
vector <int> integerToArray(int x)
{
    vector <int> resultArray;
    while (true)
    {
    resultArray.insert(resultArray.begin(), x%10);
    x /= 10;
    if(x == 0)
        return resultArray;
    }
}
