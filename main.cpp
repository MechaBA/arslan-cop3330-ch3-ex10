/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Berkay Arslan
 */

#include <iostream>
using namespace std;

int main()
{
string operation;
double n1, n2; //First and second number in expression
cout<<"Enter expression(+, -, *, /): ";
cin >> operation>>n1>>n2;
    if(operation == "+") //If expression is +
    {
        cout<<"Expression: "<<n1<<" + "<<n2<<" = "<<(n1+n2)<<endl; //Addition
    }
    else if(operation == "-") //If expression is -
    {
        cout<<"Expression: "<<n1<<" - "<<n2<<" = "<<(n1-n2)<<endl; //Subtraction
    }
    else if(operation == "*") //If expression is *
    {
        cout<<"Expression: "<<n1<<" * "<<n2<<" = "<<(n1*n2)<<endl; //Multiplication
    }
    else if(operation == "/") //If expression is /
    {
        cout<<"Expression: "<<n1<<" / "<<n2<<" = "<<(n1/n2)<<endl; //Division
    }
return 0;
}