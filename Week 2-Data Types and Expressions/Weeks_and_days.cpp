#include<iostream>
using namespace std;

int main()
{
    int daysTravelled;
    int fullWeeks,remainingDays;

    cout<<"Please enter number of days you travelled : "<<endl;
    cin>>daysTravelled;

    fullWeeks = daysTravelled / 7;
    remainingDays = daysTravelled % 7 ;

    cout<<daysTravelled<<" days are "<<fullWeeks<<" weeks and "<<remainingDays<<" days"<<endl;

    return 0;
}