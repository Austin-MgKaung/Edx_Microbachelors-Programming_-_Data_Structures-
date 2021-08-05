#include<iostream>
using namespace std;

int main()
{
    int num,r_num = 1 ,count = 0 ;
    
    cout<<"Please enter a positive integer:";
    cin>>num;
    while(count < num)
    {
        if(r_num % 2 == 0)
        {
            cout<<r_num<<endl<<endl;
            count++;
        }
        r_num++;
    }
    return 0;
}