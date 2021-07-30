#include<iostream>
using namespace std;
const short QUARTER_TO_CENT = 25;
const short DIME_TO_CENT = 10;
const short NICKEL_TO_CENT = 5;
const short PENNY_TO_CENT = 1;
const short DOLLAR_TO_CENT = 100;
int main()
{
    int dollars, cents;
    int quarters, dimes , nickels , pennies, total_cents;
    cout<<"Please enter the amount of money to convert: "<<endl;
    cout<<"\n";
    cout<<"# of dollars: ";
    cin>>dollars;
    cout<<"# of cents: ";
    cin>>cents;
    total_cents = dollars*DOLLAR_TO_CENT + cents;
    quarters = total_cents / QUARTER_TO_CENT ;
    total_cents %=QUARTER_TO_CENT;
    dimes = total_cents / DIME_TO_CENT;
    total_cents %= DIME_TO_CENT;
    nickels= total_cents / NICKEL_TO_CENT;
    total_cents %= NICKEL_TO_CENT;
    pennies = total_cents /PENNY_TO_CENT;
    cout<< "The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "
    <<pennies<<" pennies"<<endl;
    return 0;

    


}