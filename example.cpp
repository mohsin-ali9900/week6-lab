#include <iostream>
#include <windows.h>
using namespace std;

int isgreater(int, int ,int);

main()
{
    int num1,num2,num3,greater;


    cout<<"Enetr the first no : ";
    cin>>num1;
    cout<<"Enetr the second no : ";
    cin>>num2;
    cout<<"Enetr the third no : ";
    cin>>num3;    

    greater=isgreater(num1,num2,num3);
    cout<<"Greatest no is : "<<greater;

}

int isgreater(int num1, int num2, int num3)
{
    int greatest;
    if(num1>num2 && num1>num3)
    {
        greatest=num1;
    }
    else if(num2>num1 && num2>num3)
    {
        greatest=num2;
    }
    else if(num3>num1 && num3>num2)
    {
        greatest=num3;
    }
    else 
    {
        greatest = num1;
    }
    return greatest;
}