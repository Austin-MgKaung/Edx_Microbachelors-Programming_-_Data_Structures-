#include<iostream>
using namespace std;

int kcombinations(int n,int k);
int factorial (int num);

int main()
{
    int n,k,k_comb;
    cout<<"Please enter n and k "<<endl;
    cin>>n>>k;
    k_comb = kcombinations(n,k);
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


int kcombinations(int n,int k)
{
    int nfact,kfact,n_kfact;
    nfact = factorial(n);
    kfact = factorial(k);
    n_kfact = factorial(n-k);
    return (nfact/(kfact*n_kfact));
}