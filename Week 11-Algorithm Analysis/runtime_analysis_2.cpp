#include<iostream>
using namespace std;

int main()
{
    int n,j,i;
    cout<<"Please enter n:  "<<endl;
    cin>>n;
    // 1/2 n^2 +1/2 n = Q(n^2)
    //T(n) = Q(n^2)
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}