#include<iostream>
using namespace std;

int gcd(int a,int b);

int main()
{
    //cout<<"Hello"<<endl;
    cout<<gcd(15,5)<<endl;
    return 0;
}

int gcd(int a,int b)
{
    int res ;
    if (b == 0)
        return a;
    else
    {
        res = gcd(b,a%b);
        return res;
    }
}