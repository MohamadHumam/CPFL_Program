//Name:Mohamad Humam D. Salam
//Activity Name: OE#4 - Postcard from Gizah
//Description: Postcard from Gizah That ask for the height and outputs 3 pyramid And the height requested.
//Date: 10/12/2021
#include <iostream>
using namespace std;

int main()
{
    int height,i,h,o;

    cout << "Enter The Height of The Pyramid : "; 
    cin >> height;

    for ( h = 1; h <= height; h++ )
    {
        
        for ( i = 1; i <= (height - h); i++)
        {
            cout << " ";
        }

        for ( o = 1; o <= h * 2 - 1; o++)
        {
            
            if (o == 1 || o == h * 2 - 1)
            {
              cout << "*";
            }
            else if (h == height)
            {
              cout << "*";
            }
            else
            {
              cout << " ";
            }

            }
             cout << " ";

        for ( i = 1; i <= (height - h); i++)
        {
            cout << "  ";
        }

        for ( o = 1; o <= h * 2 - 1; o++)
        {
            
            if (o == 1 || o == h * 2 - 1)
            {
                cout << "*";
            }
            else if (h == height)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }
        cout << " ";

        for ( i = 1; i <= (height - h); i++)
        {
            cout << "  ";
        }

        for ( o = 1; o <= h * 2 - 1; o++)
        {
           
            if ( o == 1 || o == h * 2 - 1)
            {
                cout << "*";
            }
            else if (h == height)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }

        cout<< "\n";
    }
    return 0;
}