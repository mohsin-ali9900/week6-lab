#include <iostream>
#include <windows.h>
using namespace std;

float lowprice(int, string);

main()
{
    int kilometers;
    string time;
    float totalprice;

    cout<<"Enetr no of kilometers : ";
    cin>>kilometers;
    cout<<"Enetr day or night : ";
    cin>>time;

    totalprice = lowprice(kilometers,time);
    cout<<""<<totalprice;

}

float lowprice(int kilometers, string time)
{
    float total;
    string vehicle;
    if(kilometers<20)
    {
        if(time=="day")
        {
            total=(kilometers*0.79)+0.70;
        }
        if(time=="night")
        {
            total==(kilometers*0.90)+0.70;
        }
    }
    if(kilometers>=20 && kilometers<100)
    {
        total=kilometers*0.09;
    }
    if(kilometers>=100)
    {
        total=kilometers*0.06;
    }
    return total;
}