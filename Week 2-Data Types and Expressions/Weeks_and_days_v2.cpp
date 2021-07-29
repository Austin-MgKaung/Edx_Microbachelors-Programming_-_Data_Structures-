#include<iostream>
using namespace std;
const int DAY_IN_A_WEEK = 7;

int main()
{
    int daysTravelled;
    int fullWeeks,remainingDays;

    cout<<"Please enter number of days you travelled : "<<endl;
    cin>>daysTravelled;

    fullWeeks = daysTravelled / DAY_IN_A_WEEK;
    remainingDays = daysTravelled % DAY_IN_A_WEEK;

    cout<<daysTravelled<<" days are "<<fullWeeks<<" weeks and "<<remainingDays<<" days"<<endl;

    return 0;
}