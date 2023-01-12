#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int volleyballtime(string, int, int);

main()
{
    string year;
    int holidays, weekendstravel,total;

    cout<<"Enetr the type of year (leap OR normal)) : ";
    cin>>year;
    cout<<"Enetr no of holidays in a year : ";
    cin>>holidays;
    cout<<"Enetr no of weekends in a year vladmir travel to town : ";
    cin>>weekendstravel;

    total = volleyballtime(year, holidays, weekendstravel);
    cout<<"Total days in which vladmir played volleyball are : "<<total;

}

int volleyballtime(string year, int holidays, int weekendstravel)
{
    float workornot,weekendsfree,totalround,totall,holidayp;
    int total;

    workornot = 48-weekendstravel;
    weekendsfree = workornot*(0.75);
    holidayp = holidays*(0.6666666666667);
    totall = weekendsfree+weekendstravel+holidayp;

    if(year=="normal")
    {
        totall=totall;
    }
    else if(year=="leap")
    {
        totall=totall+(totall*0.15);
    }
    total = totall;
    return total;
}