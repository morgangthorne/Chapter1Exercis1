/*
File Name: Chapter1Exercise1.cpp
Programmer: Morgan Thorne
Date: 01/2025
Requirements:
Create a program in C++ that accepts the number of hours worked and the pay rate of the employee 
and display their gross pay

*/

#include <iostream>
using namespace std;

int main()
{
    int hours=40;
    double payrate=15.00;
    double pay;
    pay = hours * payrate;
    cout << "Your pay check this week is $" << pay << "\n";
}


