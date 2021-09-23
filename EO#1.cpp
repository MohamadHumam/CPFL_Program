//Name: Mohamad Humam D. Salam
//Activity Name: OE1
//Description: Input & Output
//Date: 07/10/2021

#include <iostream>
#include <string> 

using namespace std;

int main ()
{
    string name,gender,course,address,yrsc,numbr;
    int age;
    long int cnumber;

    cout << "Enter your Name           : ";
    getline(cin,name);
    cout << "Enter your Gender         : ";
    getline(cin,gender);
    cout << "Enter your Age            : ";
    cin >> age;
    cin.ignore();
    cout << "Enter your Address        : ";
    getline(cin,address);
    cout << "Enter your Year/Section   : ";
    getline(cin,yrsc);
    cout << "Enter your Course         : ";
    getline(cin,course);
    cout << "Enter your Contact Number : ";
    cin>>cnumber;
    cin.ignore();
    
    cout << "\n ===================================" <<endl;
    cout << "\nYour name is " <<name <<endl;
    cout << "\nYour Gender is " <<gender <<endl;
    cout << "\nYour age is " <<age <<endl;
    cout << "\nYour Course is " <<course <<endl;
    cout << "\nYour Year & Section is " <<yrsc <<endl;
    cout << "\nYour Address is " <<address <<endl;
    cout << "\nYour Contact Number is " <<cnumber <<endl;

    return 0;
}