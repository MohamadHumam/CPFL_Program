//Name: Mohamad Humam D. Salam
//Activity Name: OE5
//Description: 
//Date: 11/04/2021

#include <iostream>
#include<string>

using namespace std;

// Void Functions 

void promptAndWait();
void reverse_str(string& str);
void reverse_int(unsigned int& n);


int main(){
    string str;
    unsigned int n;
    int c, t = 0;

    do{
        system("cls");
         cout << endl;
         
         cout << "[1] ||Reverse a String           ||" << endl;
         cout << "[2] ||Reverse an Unsigned Integer||" << endl;
         cout << "[3] ||Exit                       ||" << endl;
         cout << "Select Conversion : ";
         cin >> c;

        switch(c){
            case 1:{
             cout << "<< Reverse a String >>" << endl;
             cout << "Enter a word : ";
             cin.ignore();
             getline(cin, str);
             reverse_str(str);
             promptAndWait();
             break;
            }

            case 2:{
             cout << "<< Reverse an Unsigned Integer >>" << endl;
             cout << "Enter a number [0-9] : ";
             cin >> n;
             cin.ignore();
             reverse_int(n);
             promptAndWait();
             break;
            }
            // End 
            case 3:
            {
             cout << "App Closed!" << endl;
             return 0;
            }
        }
    }
    while(t == 0);
}

// Function Definition

void reverse_str(string& str)
{
    int n = str.length();
 
// Swapping the character
    
    for (int i = 0; i < n / 2; i++){
        swap(str[i], str[n - i - 1]);
    }

    cout << str  << endl;  

}

void reverse_int(unsigned int& n)
{
    int reverse=0, rem;      
    while(n!=0)    
    {    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
    }    

    cout << reverse << endl;
}

// return 

void promptAndWait()
{
    cout << "Press Enter to continue...";
    cin.get();
}