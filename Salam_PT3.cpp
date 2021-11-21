//Name:Mohamad Humam D. Salam
//Activity Name: PT#3 
//Description: Salary program with file I/O stream
//Date: 11/19/2021
#include <iostream>
#include<string>
#include <fstream>
using namespace std;
const double T = 0.12;
const double T1 = 0.10;
const double T2 = 0.05;
void promptAndWait();
void Tsalary();
void Sread();

int main()
{

    //Input

    int ch, exit = 0, temp;

    do
    {
        system("cls");
        cout << " << Salary App >>" << endl;
        cout << " [1] Input new Data " << endl;
        cout << " [0] Exit" << endl;
        cout << " Select an option : ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            {
                
                Tsalary();
                promptAndWait();
                break;
            }

            case 0:
            {
                
                cout << " Thank you for using the App.";
                return 0;
                break;
            } 

            default:
            {

                cout << "Invalid Input.";
                promptAndWait();
                break;
            }
        }

    }while(exit == 0);

}

void promptAndWait()
{

    cin.ignore();
    cout << "\nPress Enter Continue...";
    cin.get();

}

    //Process

void Tsalary()
{

    ofstream File;
    File.open("Final_Salary_Output.txt", ios:: app);
    
    string Ename;
    int nHrs, eID, taxR;
    double rh, grosspay, netpay,taxp;

    cout << "\nEnter your Employee ID       : ";
    cin >> eID;
    cin.ignore();

    cout << "Enter your Employee Name     : ";
    getline(cin,Ename);

    cout << "Enter your Hours Worked      : ";
    cin >> nHrs;

    cout << "Enter your Rate per Hour     : ";
    cin >> rh;

    grosspay = rh * nHrs; 

    if(grosspay > 40000) 
    {
        taxp = grosspay * T;
        netpay = grosspay - taxp;
        taxR = 12;

    }

    else if (grosspay >= 30000 && grosspay <= 40000 ) 
    {
        taxp = grosspay * T1;
        netpay = grosspay - taxp;
        taxR = 10;
    }

    else 
    {
        taxp = grosspay * T2;
        netpay = grosspay - taxp;
        taxR = 5;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    File << "\n-----------------Salary--------------------"    << endl;
    File << "Employee ID        : "   << eID      << endl;
    File << "Employee Name      : "   << Ename            << endl;
    File << "Employee Gross Pay : Php" << grosspay          << endl;
    File << "Employee Tax Rate  : "   << taxR <<"%"      << endl;
    File << "Employee Net Pay   : Php" << netpay            << endl;
    File << "+++++++++++++++++++++++++++++++++++++++++++++"    << endl;

    File.close();
}