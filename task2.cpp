#include <iostream>
#include <windows.h>
using namespace std;

string speedcheck(float);

main()
{
    float speed;
    string sss;
    cout<<"Enter The Speed : ";
    cin>>speed;

    sss= speedcheck(speed);
    cout<<""<<sss;
}

string speedcheck(float speed)
{
    string result;
    if(speed<=10)
    {
        result = "slow";
    }
    else if (speed>10 && speed<=50)
    {
        result = "average";
    }
    else if (speed>50 && speed<=150)
    {
        result = "fast";
    }
    else if (speed>150 && speed<=1000)
    {
        result = "ultra-fast";
    }
    else if (speed>1000)
    {
        result = "extremely fast";
    }
    return result;

}