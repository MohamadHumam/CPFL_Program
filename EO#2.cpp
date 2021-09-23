//Name: Mohamad Humam D. Salam
//Activity Name: OE#2
//Description: POS Computer System that computes at least 3 kinds product input, plus 12% VAT.

#include<iostream>
#include<string>
const double TAX = 0.12;
using namespace std;

int main()
{
    string cname,pn1,pn2,pn3,pi1,pi2,pi3;
    int pq1,pq2,pq3;
    double price1, price2, price3 , prices , prices1 , prices2 , prices3 , prices4 , tprice , tprice1 , tprice2 , tprice3 , t_1price, t_2price, t_3price, t_price ;

    cout << "Enter Customer Name          : ";
    getline(cin,cname);
    cin.ignore();
    cout << "Enter Product ID             : ";
    cin  >> pi1;
    cout << "Enter Product Name           : ";
    cin  >> pn1;
    cout << "Enter Quantity               : ";
    cin  >> pq1;
    cout << "Enter Product Price          : ";
    cin  >> price1;
    cout << "Enter Second Product ID      : ";
    cin  >> pi2;
    cout << "Enter Second Product Name    : ";
    cin  >> pn2;
    cout << "Enter Quantity               : ";
    cin  >> pq2;
    cout << "Enter Product Price          : ";
    cin  >> price2;
    cout << "Enter Third Product ID       : ";
    cin  >> pi3;
    cout << "Enter Third Product Name     : ";
    cin  >> pn3;
    cout << "Enter Quantity               : ";
    cin  >> pq3;
    cout << "Enter Product Price          : ";
    cin  >> price3;

    prices1 = (pq1 * price1);
    prices2 = (pq2 * price2);
    prices3 = (pq3 * price3);
    prices4 = prices1 + prices2 + prices3 ;
  
    tprice1 = (price1 * TAX);
    tprice2 = (price2 * TAX);
    tprice3 = (price3 * TAX);
    tprice  = (tprice1 + tprice2 + tprice3);

    t_1price = (tprice1 + prices1);
    t_2price = (tprice2 + prices2);
    t_3price = (tprice3 + prices3);
    t_price =  (t_1price + t_2price + t_3price);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\n=========================================================" <<endl;
    cout << "\n------------------------RECEIPT--------------------------" <<endl;
    cout << "Product ID           : " << pi1 <<endl;
    cout << "Product Name         : " << pn1 <<endl;
    cout << "Quantity             : " << pq1 <<endl;
    cout << "VAT                  : " << tprice1 <<endl;
    cout << "Price                : " << "P"  << t_1price <<endl;
    cout << "\n---------------------------------------------------------" <<endl;
    cout << "Second Product ID    : " << pi2 <<endl;
    cout << "Second Product Name  : " << pn2 <<endl;
    cout << "Second Quantity      : " << pq2 <<endl;
    cout << "VAT                  : " << tprice2 <<endl;
    cout << "Price                : " << "P"  << t_2price <<endl;
    cout << "\n---------------------------------------------------------" <<endl;
    cout << "Third Product ID     : " << pi3 <<endl;
    cout << "Third Product Name   : " << pn3 <<endl;
    cout << "Third Quantity       : " << pq3 <<endl;
    cout << "VAT                  : " << tprice3 <<endl;
    cout << "Price                : " << "P" << t_3price <<endl;
    cout << "\n---------------------------------------------------------" <<endl;
    cout << "TOTAL Amount         : " << t_price <<endl;
    cout << "\n=========================================================" <<endl;
    return 0;
}    