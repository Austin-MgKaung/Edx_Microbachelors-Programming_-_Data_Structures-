#include<iostream>
using namespace std;
const short QUARTER_TO_CENT = 25;
const short DIME_TO_CENT = 10;
const short NICKEL_TO_CENT = 5;
const short PENNY_TO_CENT = 1;
int main()
{
    int quarters, dimes , nickels , pennies ,total_cent;
    cout<<"Please enter the number of coins: "<<endl;
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickels: ";
    cin>>nickels;
    cout<<"# of pennies: ";
    cin>>pennies;
    total_cent = quarters*QUARTER_TO_CENT + dimes*DIME_TO_CENT + nickels*NICKEL_TO_CENT + pennies*PENNY_TO_CENT;
    cout<<"The total is "<<total_cent/100<<" dollars and "<<total_cent%100<<" cents"<<endl;
    return 0;

}