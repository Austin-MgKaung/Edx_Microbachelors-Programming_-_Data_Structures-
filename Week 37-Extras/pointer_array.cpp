#include<iostream>

#include<string>

using namespace std;

int main()
{
    int luckyNumber[5] ;
    /*  {2,3,4,5,7};
    cout<<luckyNumber<<endl;
    cout<<&luckyNumber[0]<<endl;
    cout<<luckyNumber[2]<<endl;
    cout<<*(luckyNumber + 2)<<endl;
    */
    for (int i = 0 ; i <= 4 ; i++)
    {
        cout<<"Number : ";
        cin>>luckyNumber[i];
    }

     for (int i = 0 ; i <= 4 ; i++)
    {
        cout<<*(luckyNumber+i)<< " ";
    }
    return 0;
}