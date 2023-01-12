#include <iostream>
#include <windows.h>
using namespace std;

float totalincome(string,int,int);

main()
{
    float total;
    int rows,columns;
    string screen;
    

    cout<<"Enter type of screening : ";
    cin>>screen;
    cout<<"Enter no of rows : ";
    cin>>rows;
    cout<<"Enetr no of columns : ";
    cin>>columns;

    total = totalincome(screen,rows,columns);
    cout<<total;

}

float totalincome(string screen,int rows,int coloumns)
{
    float finalprice;
    if(screen=="premieres")
    {
        finalprice=12.00*rows*coloumns;
    }
    else if(screen=="normal")
    {
        finalprice=7.50*rows*coloumns;
    }
    else if(screen=="discount")
    {
        finalprice=5.00*rows*coloumns;
    }
return finalprice;
}