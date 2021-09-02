#include<iostream>
using namespace std;

int main()
{
    int n, k, i, nfact, kfact, n_kfact, k_comb;
    cout << "PLease enter n and k (n>=k):"<<endl;
    cin>>n>>k;

    nfact = 1;
    for (i = 1; i <= n; i++)
        nfact*=i;
    
    kfact = 1;
    for (i = 1; i <= k; i++)
        kfact*=i;
    
    n_kfact = 1;
    for(i = 1; i <= n-k; i++)
        n_kfact*=i;

    k_comb=nfact/(kfact*n_kfact);

    cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;

    return 0;
}