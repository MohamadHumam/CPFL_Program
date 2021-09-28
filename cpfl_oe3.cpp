//Name:Mohamad Humam D. Salam
//Description: Tax scheme that computes 3 different TAX range that depends on the gross pay to get the net pay
//Date: 09/23/2021

#include<iostream>
#include<string>
using namespace std;
const double TAX = 0.12;
const double TAX2 = 0.10;
const double TAX3 = 0.5;
using namespace std;

int main()
{
    string name, employeeid;

    int num_hours_work, rate_per_hour;
    double gross_pay, net_pay1,net_pay2, net_pay3;

    cout << "Enter your Employee ID          : ";
    getline(cin,employeeid);
    cout << "Enter your Name                 : ";
    getline(cin,name);
    cout << "Enter Hours Worked              : ";
    cin  >> num_hours_work ;
    cout << "Enter Rate Per Hour             : ";
    cin  >> rate_per_hour ;
//To get the net pay first get the gross pay
    gross_pay= rate_per_hour * num_hours_work;
//This is for decimal
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

//if 0 is input in both number of hours work and rate per hour is 0 it will out put You Did Not Input Anything. 
    if(num_hours_work == 0 || rate_per_hour == 0){
    cout << "You Did Not Input Anything.";
    return 0;
    }     
//Here is where the net pay will be computed and get outputed
//This where I used If else statement 
//This program works by after compute the grosspay it will multiply the tax and the answer will be the net pay which is what we need to complete the output
    else if(gross_pay >= 40000){
        net_pay1 = gross_pay * TAX;
        cout << "\n----------------------Salary--------------------------" <<endl;
        cout << "Employee ID           : " << name <<endl;
        cout << "Employee Name         : " << employeeid <<endl;
        cout << "Gross Pay             : " << "P " << gross_pay <<endl;
        cout << "Tax Rate              : 12%" <<endl;
        cout << "Net Pay               : " << "P " <<net_pay1 <<endl;
        return 0;
    
    }else if(gross_pay <= 30000||40000){
        net_pay2 = gross_pay * TAX2;
        cout << "\n----------------------Salary--------------------------" <<endl;
        cout << "Employee ID           : " << name <<endl;
        cout << "Employee Name         : " << employeeid <<endl;
        cout << "Gross Pay             : " << "P "  << gross_pay <<endl;
        cout << "Tax Rate              : 10%" <<endl;
        cout << "Net Pay               : " << "P "  <<net_pay2 <<endl;
        return 0;
        
    }else if(gross_pay <= 20000){
        net_pay3 = gross_pay * TAX3;
        cout << "\n----------------------Salary--------------------------" <<endl;
        cout << "Employee ID           : " << name <<endl;
        cout << "Employee Name         : " << employeeid <<endl;
        cout << "Gross Pay             : "  << "P "  << gross_pay <<endl;
        cout << "Tax Rate              : 5%" <<endl;
        cout << "Net Pay               : "  << "P "  <<net_pay3 <<endl;
        return 0;
    }
    

}