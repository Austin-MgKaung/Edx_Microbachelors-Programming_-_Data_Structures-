#include<iostream>
using namespace std;

int factorial (int num);

int main()
{
    int n,k,k_comb;
    int nfact,kfact,n_kfact;
    cout<<"Please enter n and k "<<endl;
    cin>>n>>k;
    nfact = factorial(n);
    kfact = factorial(k);
    n_kfact = factorial(n-k);
    k_comb = nfact/(kfact*n_kfact);
    cout<<n<<" choose "<<k<<" is ";
    cout<<k_comb<<endl;
    return 0 ;
}


int factorial (int num)
{
    int factRes,i;
    factRes = 1;
    for(i = 1 ; i <= num;i++)
    {
        factRes *= i;
    }
    return factRes;
}