#include<iostream>
#include<string>

using namespace std ;

int main ()
{
    string sentence;
    int n_mid ;
    char mid;
    string first ,second;
    cout<<"Enter an odd length string: ";
    getline(cin,sentence);
    n_mid = sentence.length()/2;
    //cout<<n_mid<<endl;
    first=sentence.substr(0,n_mid);
    mid = sentence[n_mid];
    second=sentence.substr(n_mid+1);
    cout<<"Middle character: "<<mid<<endl;
    cout<<"First half: "<<first<<endl;
    cout<<"Second half: "<<second<<endl;


    return 0;
}