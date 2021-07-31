#include<iostream>
using namespace std;

int main ()
{
    int val = 0;
    //It is legal but it looks arithmatic expression and it evaluate to 0 so it is False
    if (val = 0) 
    {
        cout<<" val is 0"<<endl;
    }
    else
    {
        cout<<"val is not 0"<<endl;
    }

    return 0 ;
    //Ans is --- val is not 0 
}