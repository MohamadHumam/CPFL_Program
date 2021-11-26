//Name: Mohamad Humam D. Salam
//Activity Name: OE#6 
//Description: Array program that sorts the input
//Date: 11/26/2021
#include<iostream>
using namespace std;
void promptAndWait();
void find(int count[], int num);
void sortAscending(int count[], int num);
void sortDescending(int count[], int num);

const int Size = 100;

int main ()
{
//Input

    int count[Size], num, ch;
    cout << "Enter number of Elements in Array: ";
    cin >> num;
     
    cout << "Enter " << num << " numbers \n";
      
    for(int l = 0; l < num; l++)
    {
        cin >> count[l];
    }

    do
    {
        system("cls");
        cout << " <<-Sorting Array Program->>" << endl;
        cout << " [1] Finding Array " << endl;
        cout << " [2] Sort Array Ascending " << endl;
        cout << " [3] Sort Array Descending " << endl;
        cout << " [0] Exit Program " << endl;
        cout << " Select an option : ";
        cin >> ch;

        switch (ch)
        {
            case 1:
            {
                
                find(count, num);
                promptAndWait();
                break;
            }

            case 2:
            {
                
                sortAscending(count, num);
                promptAndWait();
                break;
            }

            case 3:
            {
                
                sortDescending(count, num);
                promptAndWait();
                break;
            }

            case 0:
            {
                
                cout << "Thank you for using the Program. " << endl;
                return 0;
            }                
            default:

                cout << "Invalid input. " << endl;
                break;
        }
    }while (true);
    
}

//Function Definition

void promptAndWait()
{

    cin.ignore();
    cout << "\nPress Enter to Continue...";
    cin.get();
}

//Process

void find(int count[], int num)
{

   for(int x = 0; x < num; x++)
    {
        cout << "Unsorted Array Elements [" << x << "] "<< count[x] << endl;
    }
}

void sortAscending(int count[], int num)
{

    int i, o, temp;

    for(o=0; o<num; o++)
    {
        for(i=o+1; i<num; i++)
        {
            if(count[i] < count[o])
            {
                temp = count[o];
                count[o] = count[i];
                count[i] = temp;
            }
        }
    }

    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(o=0; o<num; o++)
    {
        cout<<count[o]<<endl;
    }
}

void sortDescending(int count[], int num)
{

    int i, o, temp;

    for (o = 0; o < num; ++o)   
    {
        for (i = o + 1; i < num; ++i)
        {
            if (count[o] < count[i])
            {
                temp = count[o];
                count[o] = count[i];
                count[i] = temp;
            }
        }
    }

    cout<<"\n Numbers in Descending Order : \n";
    for (o = 0; o < num; ++o)
    {
        cout<<" ";
        cout<<count[o];
        cout<<"\n";
    }
}