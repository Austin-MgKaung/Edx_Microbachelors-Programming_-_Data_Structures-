#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3,n4;
    int count=0;
    cout<<"Please enter 4 positive integers, separated by a space:"<<endl;
    cin>>n1>>n2>>n3>>n4;

    count = (n1%2 == 0) ? count + 1 : count;
    count = (n2%2 == 0) ? count + 1 : count;
    count = (n3%2 == 0) ? count + 1 : count;
    count = (n4%2 == 0) ? count + 1 : count;
    if (count  == 2)
        cout<<"same number of evens and odds"<<endl;
    else if (count > 2)
        cout<<"more evens"<<endl;
    else
        cout<<"more odds"<<endl;
        
    return 0;
}