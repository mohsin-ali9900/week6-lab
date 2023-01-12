#include <iostream>
#include <windows.h>
using namespace std;

string checktitle(char,int);

main()
{
    int age;
    char gender;
    string result;

    cout<<"Enter your gender ('m' for male 'f' for female) : ";
    cin>>gender;
    cout<<"Enetr your age";
    cin>>age;

    result = checktitle(gender,age);
    cout<<""<<result;
}

string checktitle(char gender,int age)
{
    string result;
    if(gender=='m' && age>=16)
    {
        result = "Mr.";
    }
    if(gender=='m' && age<16)
    {
        result = "Master";
    }
    if(gender=='f' && age>=16)
    {
        result = "Ms.";
    }
    if(gender=='f' && age<16)
    {
        result = "Miss";
    }
    return result;

}