#include <iostream>
#include <windows.h>
using namespace std;

float checkit(int, string, int);

main()
{
    int members,budget;
    string category;
    float left;
    float pleft;

    cout<<"Enetr the budget (1000 - 1000000) : ";
    cin>>budget;
    cout<<"Enetr the category of ticket (vip or normal) : ";
    cin>>category;
    cout<<"Enetr no of members (1 - 200) : ";
    cin>>members;

    left = checkit(budget, category, members);
    if(left>=0)
    {
        cout<<"Yes! Ypu have "<<left<<" QR left.";
    }
    else if(left<0)
    {
        pleft= (-1)*left;
        cout<<"NOT Enough Money! You need "<<pleft<<" QR.";
    }
}

float checkit(int budget, string category, int members)
{
    float amount,transportleft,ticketleft;

    if(members>=1 && members<=4)
    {
        transportleft=budget-((budget*75)/100);
        if(category=="vip")
        {
            ticketleft=transportleft-(members*499.99);
        }
        else if(category=="normal")
        {
            ticketleft=transportleft-(members*249.99);
        }
    }

    if(members>=5 && members<=9)
    {
        transportleft=budget-((budget*60)/100);
        if(category=="vip")
        {
            ticketleft=transportleft-(members*499.99);
        }
        else if(category=="normal")
        {
            ticketleft=transportleft-(members*249.99);
        }
    }

    if(members>=10 && members<=24)
    {
        transportleft=budget-((budget*50)/100);
        if(category=="vip")
        {
            ticketleft=transportleft-(members*499.99);
        }
        else if(category=="normal")
        {
            ticketleft=transportleft-(members*249.99);
        }
    }

    if(members>=25 && members<=49)
    {
        transportleft=budget-((budget*40)/100);
        if(category=="vip")
        {
            ticketleft=transportleft-(members*499.99);
        }
        else if(category=="normal")
        {
            ticketleft=transportleft-(members*249.99);
        }
    }

    if(members>=50)
    {
        transportleft=budget-((budget*25)/100);
        if(category=="vip")
        {
            ticketleft=transportleft-(members*499.99);
        }
        else if(category=="normal")
        {
            ticketleft=transportleft-(members*249.99);
        }
    }


    return ticketleft;
}