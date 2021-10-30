//Name:Mohamad Humam D. Salam
//Activity Name: PT#2 
//Description: Money converter that converts Peso to Dollar and Dollar to Peso
//Date: 10/29/2021
#include <iostream>
//This are the missing #include for the computations
#include <iomanip>
#include <locale>

using namespace std;

//function for monetary formatting
struct group_facet: public numpunct<char> {

    protected:

        string do_grouping() const { return "\003"; }
};

// First function prototypess
    void promptAndWait();

/* Function takes two arguments: one float and one unsigned int.
The unsigned int has a default value of 1. Function returns no value.*/
void dollarsToPesos(float rate, double USD);
void pesosToDollars(float rate2, double PhP);
int ans = 1;

int main(){
// Declare the variables for the user input.
    float rate = 50.73, rate2 = 0.020;// $1 = 50.73 Pesos
    double dollarsIn, pesosIn;
    int ch;

    do
    {
        system("cls");
        cout << endl;
        cout << "Dollar to Peso Conversion App" << endl << endl;
        cout << "[1] Dollar to Peso" << endl;
        cout << "[2] Peso to Dollar" << endl;
        cout << "[3] Exit the Coversion App" << endl;
        cout << "Select Conversion : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                system("cls");
                cout << "\n<< Convert Dollar to Peso >>" << endl;
                cout << "Dollar Conversion Rate to Peso : " << rate <<endl;
                cout << "Enter Dollar Amount " ;
                cin >> dollarsIn;
                dollarsToPesos(rate, dollarsIn);  
                promptAndWait(); 
                break;
            }

            case 2:
            {
                system("cls");
                cout << "\n<< Convert Peso to Dollar >>" << endl;
                cout << "Peso Conversion Rate to Dollar : " << rate <<endl;
                cout << "Enter Peso Amount " ;
                cin >> pesosIn;
                pesosToDollars(rate2, pesosIn);
                promptAndWait();
                break;
            }
            case 3:
            {
                cout << "Conversion App Terminated \nThank you for using the app!";
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
}    //End of main function

    // Define the promptAndWait() function.
    void promptAndWait()
    {
        cout << "Do you want to continue? " << endl;
        cout << "[1] yes" << endl;
        cout << "[2] no" << endl;
        cin >> ans;  
    }

    // Define the dollarsToPeso function.
    void dollarsToPesos(float rate, double USD)
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\n$" << USD << " US = " << (rate * USD) << " Pesos. \n";
}
   // Define the pesostodollar function.
    void pesosToDollars(float rate2, double PhP)
{
    // Adjust the formatting.
    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the results.
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout << "\nP" << PhP << " Pesos = " << (rate2 * PhP) << " US. \n";
}