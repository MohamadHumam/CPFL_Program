//Name:Mohamad Humam D. Salam
//Activity Name: Prelim ho Exam
//Description: Payroll Program with if else statement that tells if your Contractual or Probationary
//Date: 09/23/2021
#include<iostream>
#include<string>

using namespace std;
const double TAX = 0.12;
const double Phil = 150;
const double SSS = 250;
const double Pag = 200;
int main()
{
    string name, employeeid, payday;

    int num_hours_work, rate_per_hour;
    double gross_pay, netpay1, netpay2, netpay3, netpay4, Fnetpay;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

//This are The Inputs
    cout << "Enter your Name                 : ";
    getline(cin,name);
    cout << "Enter your Employee Number      : ";
    getline(cin,employeeid);
    cout << "Enter Date of Payday            : ";
    getline(cin,payday);
    cout << "Enter Hours Worked              : ";
    cin  >> num_hours_work ;
    cout << "Enter Rate Per Hour             : ";
    cin  >> rate_per_hour ;
// This where are The Formula of getting The Withholding Tax, GrossPay, and Netpay
    gross_pay= rate_per_hour * num_hours_work;
    netpay1 = gross_pay * TAX;
    netpay2 = gross_pay - netpay1;
    netpay3 = netpay2 - Phil;
    netpay4 = netpay3 - SSS;
    Fnetpay = netpay4 - Pag;


//Here is The oupt    
//if 0 is input in both number of hours work and rate per hour is 0 it will output This
    if(num_hours_work == 0 || rate_per_hour == 0){
    cout << "You Did Not Input Anything.";
    return 0;
    //if the net pay is less than 5,000 this the output
    }else if (gross_pay <= 5000){ 
        cout << "\n----------------------Salary--------------------------" <<endl;
        cout << "Employee Name               : " << name <<endl;
        cout << "Employee Number             : " << employeeid <<endl;
        cout << "Date of payday              : " << payday <<endl;
        cout << "--------------------------------------------------------" <<endl;
        cout << "Hourly Pay Rate             : " << rate_per_hour <<" Php " <<endl;
        cout << "Hours Workded               : " << num_hours_work <<" Php "<<endl;
        cout << "--------------------------------------------------------" <<endl;
        cout << "Payroll Summary For         : " << name <<endl;
        cout << "Employee No.                : " << employeeid <<endl;
        cout << "Payroll Date                : " << payday <<endl;
        cout << "--------------------------------------------------------" <<endl;
        cout << "Your Salary of " << num_hours_work << " hrs in a rate of "<< rate_per_hour <<" Php"  <<endl;
        cout << "Gross Pay                   : " << gross_pay <<" Php " <<endl;
        cout << "Withholding Tax             : " << netpay1 <<" Php "  <<endl;
        cout << "PhilHealth                  : " << Phil <<" Php "  <<endl;
        cout << "SSS                         : " << SSS <<" Php "  <<endl;
        cout << "Pagibig                     : " << Pag <<" Php "  <<endl;
        cout << "\n======================================================" <<endl;
        cout << "Net Pay                     : " << Fnetpay <<" Php " <<endl;
        cout << "Emplyee Status              : Contractual  " <<endl;

        return 0;

//if the net pay is greater than 5,001 this the output
    }else if(gross_pay >= 50001){
        cout << "\n----------------------Salary--------------------------" <<endl;
        cout << "Employee Name               : " << name <<endl;
        cout << "Employee Number             : " << employeeid <<endl;
        cout << "Date of payday              : " << payday <<endl;
        cout << "--------------------------------------------------------" <<endl;
        cout << "Hourly Pay Rate             : " << rate_per_hour <<" Php " <<endl;
        cout << "Hours Workded               : " << num_hours_work <<" Php "<<endl;
        cout << "--------------------------------------------------------" <<endl;
        cout << "Payroll Summary For         : " << name <<endl;
        cout << "Employee No.                : " << employeeid <<endl;
        cout << "Payroll Date                : " << payday <<endl;
        cout << "--------------------------------------------------------" <<endl;
        cout << "Your Salary of " << num_hours_work << " hrs in a rate of "<< rate_per_hour <<"P hp"  <<endl;
        cout << "Gross Pay                   : " << gross_pay <<"Php " <<endl;
        cout << "Withholding Tax             : " << netpay1 <<" Php "  <<endl;
        cout << "PhilHealth                  : " << Phil <<"Php "  <<endl;
        cout << "SSS                         : " << SSS <<" Php "  <<endl;
        cout << "Pagibig                     : " << Pag <<" Php "  <<endl;
        cout << "\n======================================================" <<endl;
        cout << "Net Pay                     : " << Fnetpay <<" Php " <<endl;
        cout << "Emplyee Status              : Probationary  " <<endl;

        return 0;
    }
    
    

}