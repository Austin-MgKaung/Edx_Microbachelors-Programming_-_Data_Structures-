#include<iostream>
using namespace std;

int main()
{
    int num ;
    int sumDigits,countDigits;
    int currDigit;

    cout<<"Enter a positive integer :"<<endl;
    cin>>num;
    int dnum=num;
    sumDigits = 0;
    countDigits = 0;
    while (num>0)
    {
        currDigit=num%10;
        countDigits++;
        sumDigits += currDigit;
        num/=10;
    }
    cout<<dnum<<" has "<<countDigits<<" Digits";
    cout<<" and their sum is "<<sumDigits<<endl;

    return 0;
}