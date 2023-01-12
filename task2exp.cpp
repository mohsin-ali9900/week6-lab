#include <iostream>
#include <windows.h>
using namespace std;

int discounttt(string, string, int);

main()
{
    int amount,discountprice;
    string month,day;
    cout<<"Enetr the Month : ";
    cin>>month;
    cout<<"Enter the Day : ";
    cin>>day;
    cout<<"Enter the Amount : ";
    cin>>amount;


    discountprice=discounttt(month,day,amount);
    cout<<"Final price is : "<<discountprice;
}

int discounttt(string month, string day, int amount)
{
    int discount=amount;
    if(day == "sunday")
    {
        if(month=="october" || month=="march" || month=="august") 
        {
             discount = amount-(amount*10)/100;
        } 
    }

    else if(day == "monday")
    {
        if(month=="november" || month=="december") 
        {
             discount = amount-(amount*5)/100;
        } 
    }


    return discount;
}