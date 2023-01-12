#include <iostream>
#include <windows.h>
using namespace std;

float pricecheck(string, string, int);

main()
{
    string city,product;
    int quantity;
    float price;

    cout<<"Enetr name of city : ";
    cin>>city;
    cout<<"Enetr name of product : ";
    cin>>product;
    cout<<"Enetr the quantity : ";
    cin>>quantity;

    price = pricecheck(city, product, quantity);
    cout<<"Total Price is : "<<price;
}

float pricecheck(string city, string product, int quantity)
{
    float price;

    if(product=="coffee")
    {
        if(city=="sofia")
        {
            price= 0.50*quantity;
        }
        else if(city=="plovdiv")
        {
            price= 0.40*quantity;
        }
        else if(city=="varna")
        {
            price= 0.45*quantity;
        }
    }

    else if(product=="water")
    {
        if(city=="sofia")
        {
            price= 0.80*quantity;
        }
        else if(city=="plovdiv")
        {
            price= 0.70*quantity;
        }
        else if(city=="varna")
        {
            price= 0.70*quantity;
        }
    }

    else if(product=="beer")
    {
        if(city=="sofia")
        {
            price= 1.20*quantity;
        }
        else if(city=="plovdiv")
        {
            price= 1.15*quantity;
        }
        else if(city=="varna")
        {
            price= 1.10*quantity;
        }
    }

    else if(product=="sweets")
    {
        if(city=="sofia")
        {
            price= 1.45*quantity;
        }
        else if(city=="plovdiv")
        {
            price= 1.30*quantity;
        }
        else if(city=="varna")
        {
            price= 1.35*quantity;
        }
    }

    else if(product=="peanuts")
    {
        if(city=="sofia")
        {
            price= 1.60*quantity;
        }
        else if(city=="plovdiv")
        {
            price= 1.50*quantity;
        }
        else if(city=="varna")
        {
            price= 1.55*quantity;
        }
    }

    return price;
}
