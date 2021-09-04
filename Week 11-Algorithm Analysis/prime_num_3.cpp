#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num);

int main()
{
    int p_num;
    cout<<"Please enter a prime number:"<<endl;
    cin>>p_num;
    if(isPrime(p_num))
        cout<<p_num<<" is a prime number"<<endl;
    else
        cout<<p_num<<" is not a prime number"<<endl;
    return 0;
}

bool isPrime(int num)// ---6sqrt(n)+4
{
    int countDivs;// ----1
    countDivs = 0 ;// ----1
    for(int i = 1/* ----1*/ ; i <= sqrt(num) ; i++)
    {
        if(num % i == 0)    // ----6sqrt(n)
            countDivs++;
    }
    if(countDivs == 1) // ----1   
        return true;// ----1
    else    // ----1
        return false;// ----1
    
}