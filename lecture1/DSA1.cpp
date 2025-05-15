#include <iostream>
using namespace std;
int main()
{
    // variables
    // int age = 10;
    // char grade = 'A';
    // float pi = 3.14f;
    // bool isSafe = true;
    // double price = 100.99;
    // cout << sizeof(pi) << endl;
    // cout << isSafe << endl;
    // cout << sizeof(price) << endl;
    // cout << sizeof(3.14) << endl;
    // cout << sizeof(3.14f) << endl;

    // type conversion

    // char grade = 'A';
    // int value = grade;
    // cout << value << endl;
    // double price = 100.99;
    // int newPrice = (int)price;
    // cout << (int)price << endl;
    // cout << newPrice << endl;

    // user input
    // double price;
    // cout << "Enter the price : ";
    // cin >> price;
    // cout << "You entered price is = " << price << endl;

    // operators

    // arithmatic operators
    // int a;
    // double b;
    // a = 10;
    // b = 3;
    // int sum = a + b;
    // cout << "sum : " << (a + b) << endl;
    // cout << "sub : " << (a - b) << endl;
    // cout << "mul : " << (a * b) << endl;
    // cout << "div : " << (a / b) << endl;
    // cout << "div : " << (5 / (double)2) << endl;

    // relational operators
    // cout << (3 < 5) << endl;
    // cout << (3 > 5) << endl;
    // cout << (3 <= 5) << endl;

    // cout << (3 != 5) << endl;

    // logical operators
    // cout << ((3 > 1) && (3 > 1)) << endl;

    // practice question : sum of two numbers ;
    int a, b;
    cout << "enter the first number : " << endl;
    cin >> a;
    cout << "enter the second number : " << endl;
    cin >> b;
    cout << "sum of the two numbers is : " << (a + b) << endl;

    // unary operator

    // pre-increment operator
    cout << "this is practice of unary operator : " << ++a << endl;
    // post-increment operator
    cout << "this is practice of unary operator : " << a++ << endl;

    // pre-decremet operator
    cout << "this is practice of unary operator : " << --a << endl;
    // post-decrement operator
    cout << "this is practice of unary operator : " << a-- << endl;
    return 0;
}