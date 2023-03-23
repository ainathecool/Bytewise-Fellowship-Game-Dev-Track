//variables, operators, data types, arithmetic operations, conditions)
#include<iostream>
using namespace std;


int main()
{
    cout << "Aleena Fatima Khalid";
    cout << "\nMan, i missed cpp!";

    //types of variables:
    /*
        int - stores integers (whole numbers), without decimals, such as 123 or -123
        double - stores floating point numbers, with decimals, such as 19.99 or -19.99
        char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
        string - stores text, such as "Hello World". String values are surrounded by double quotes
        bool - stores values with two states: true or false
    */


    //declaring all variables and initalising
    int number = 0;
    double doubleNum = 0.0;
    char c = 'a';
    string s = "";
    bool flag = 0;


    //taking input 
    cout << "Enter num:";
    cin >> number;

    cout << "Enter double num:";
    cin >> doubleNum;

    cout << "Enter char:";
    cin >> c;

    cout << "Enter string:";
    cin >> s;


    cout << number << " " << doubleNum << " " << c << " " << s << " ";


    //arithemtic operations and conditions

    if (number > 0 && number < 10)
    {
        number = number + 10;
        cout << "\nNumber after addition of 10: " << number;
    }
    else if (number >= 10)
    {
        number = number - 2;
        cout << "\nnumber after substraction of 10: " << number;
    }
    else
        cout << "\nNumber: " << number;


    if (s == "hello")
    {
        doubleNum = doubleNum * number;
        cout << "\nAfter multiplication: " << doubleNum;
    }
    else
    {
        doubleNum = doubleNum / 2;
        cout << "\nAfter division: " << doubleNum;

    }




    return 0;
}