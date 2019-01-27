#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{

    ifstream numberFile;
    string line;
    int numA;
    int numB;

    numberFile.open("numbers.txt", ios::in);

    if(numberFile.is_open()){
        while(getline(numberFile, line)){

           int sum = 0;

            istringstream iss(line);

            for(string s; iss >> s;){

                int num = stoi(s);
                sum += num;
            }

            cout << "The sum is: " << sum << endl;

        }

    }

    else cout << "No file exists.";

    return 0;
}
