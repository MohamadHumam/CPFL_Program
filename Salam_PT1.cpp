//Name:Mohamad Humam D. Salam
//Activity Name: Performance Task # 1
//Description: Odd/Even Number Scheme that can Compute Consecutive Number(s)
//Date: 10/11/2021

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,r;
    
    cout << " Enter The Range of Number(s) : ";
    cin >> r;
    cout << " Enter " << r << " Consecutive Number(s) : ";
    cin >> n;
     
    if (n %2 == 0){
        cout << " " << n << " -is Even\n ";
        
    }else{
        cout << " " << n << " -is Odd\n ";

    }
    while(n <= r)
    {
        cin >> n;

        if (n %2 == 0){
        cout << " " << n <<"-is Even\n ";  

        }else{
        cout << " " << n <<"-is Odd\n ";
        }
    }

    return 0;
}