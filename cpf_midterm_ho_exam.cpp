//Name:Mohamad Humam D. Salam
//Activity Name:Midterm Hands-On Exam
//Description:Length Conversion App Calculator
//Date: 11/08/2021
#include <iostream>
#include <iomanip>

using namespace std;

void promptandwait();
void metertoKilogram(double m, double km);
void kilogramtoMeter(double km2 , double m2);
void centimetertoMilimeter(double cm, double mm);
void foottoInch(double ft, double in); 
double m, m2, km, km2, cm, mm, ft, in;
double meter, kilometer, centimeter, milimeter, foot;
int ans = 1;
int main()
{

    int ch;

    do
    {
        system("cls");
        cout << endl;
        cout << "Length Conversion App Calculator" << endl << endl;
        cout << "[1] Meter to Kilometer" << endl;
        cout << "[2] Kilometer to Meter" << endl;
        cout << "[3] Centimeter to Milimeter" << endl;
        cout << "[4] Foot to Inch" << endl;
        cout << "[5] Exit" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                system("cls");
                cout << "\n<< Convert Meter to Kilometer >>" << endl;
                cout << "Enter Length: " ;
                cin >> meter;
                metertoKilogram(m, km);  
                promptandwait(); 
                break;
            }
            case 2:
            {
                system("cls");
                cout << "\n<< Convert Kilometer to Meter >>" << endl;
                cout << "Enter Length: " ;
                cin >> kilometer;
                kilogramtoMeter(km2, m2);
                promptandwait();
                break;
            }
            case 3:
            {
                system("cls");
                cout << "\n<< Convert Centimeter to Milimeter >>" << endl;
                cout << "Enter Length: " ;
                cin >> centimeter;
                centimetertoMilimeter(cm, mm);
                promptandwait();
                break;
            }
            case 4:
            {
                system("cls");
                cout << "\n<< Convert Foot to Inch >>" << endl;
                cout << "Enter Length: " ;
                cin >> foot;
                foottoInch(ft, in);
                promptandwait();
                break;
                return 0;
            }
            case 5:
            {
                cout << "Length Conversion App Calculator Terminated \nThank you for using the app!";
                return 0;
            }
            default:
            {
                cout << "Invalid Input!";
                break;
            }

        }
    }while(ans == 1); 
return 0; 
}    

    
    void promptandwait()
    {
        cout << "Do you want to continue? " << endl;
        cout << "[1] yes" << endl;
        cout << "[2] no" << endl;
        cin >> ans;  
    }

void metertoKilogram(double m, double km)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n=======================================" << endl;
    cout << "\nKilometer : " << (meter / 1000) << "km" <<endl;
    cout << "======================================="<< endl;
}

 void kilogramtoMeter(double km2, double m)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n======================================" << endl;
    cout << "\nMeter : " << (kilometer * 1000) << "m" <<endl;
    cout << "======================================"<< endl;
}

void centimetertoMilimeter(double cm, double mm)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n=========================================" << endl;
    cout << "\nMilimeter : " << (centimeter * 10) <<"mm" <<endl;
    cout << "========================================="<< endl;
}

void foottoInch(double ft, double in)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "\n===================================" << endl;
    cout << "\nInch : " << (foot * 12) << "in" <<endl;
    cout << "==================================="<< endl;
}