//Name:Mohamad Humam D. Salam
//Activity Name:OE#7
//Description:Implement login credentials
//Date: 12/ 07 /2021
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(void)
{

string userName, Password;
int Login;

while (Login < 3)
    {
        cout << "Please Enter Your UserName      : ";
        cin >> userName;
        cout << "Please enter your user password : ";
        cin >> Password;

        system("cls");
        if (userName == "HumamI" && Password == "mark")
        {
            cout << "Welcome Admin!\n";
            return 0;
        }
        else if (userName == "humami" && Password == "mark")
        {
            cout << "Welcome User!\n";
            return 0;
        }
        else if (userName == "humam1" && Password == "mark")
        {
            cout << "Welcome User!\n";
            return 0;
        }
        else
        {
            cout << "Login attempt was unsuccessful. Please try again.\n" << '\n';
            Login++;
        }
    }
    if (Login == 3)
    {
            cout << "Too many login attempts! The program will terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";
    
    string name, employeeid, taxR;
    int num_hours_work;
    double rate_per_hour, gross_pay, tax_p, net_p;
    cout << "Enter Name                   : ";
        cin >> name;
    cout << "Enter Employee ID            : ";
        cin >> employeeid;
    start:
    cout << "Enter Number of Hours Worked : ";
        cin >> num_hours_work;
    cout << "Enter Rate Per Hour          : ";
        cin >> rate_per_hour;

     gross_pay = rate_per_hour * num_hours_work;
    if(num_hours_work == 0 || rate_per_hour == 0)
    {
        cout << "You did not input Anything.\n";
        goto start;
    }    
    else if(gross_pay > 40000)
    {
        tax_p = gross_pay * 0.12;
        net_p = gross_pay - tax_p;
        taxR = "12%";
    }
    else if((gross_pay <= 40000)&&(gross_pay >= 30000))
    {
        tax_p = gross_pay * 0.10;
        net_p = gross_pay - tax_p;
        taxR = "10%";
    }
    else if(gross_pay < 30000)
    {
        tax_p = gross_pay * 0.05;
        net_p = gross_pay - tax_p;
        taxR = "5%";
    }
   
    cout << "\n----------------------Salary--------------------------" <<endl;
    cout << "Employee Name          : " << name << endl;
    cout << "Employee ID            : " << employeeid << endl;
    cout << "Number of Hours Worked : " << num_hours_work << endl;
    cout << fixed << setprecision(2) << "Gross Pay              : " << gross_pay << endl;
    cout << "Tax Rate               : " << taxR << endl; 
    cout << fixed << setprecision(2) << "Net Pay                : " << net_p << endl;
}