#include<iostream>
#include<string>
using namespace std;
string firstword(string s);
string remainingwords(string s);
int main ()
{
    cout<<firstword("the quick brown fox")<<endl;
    cout<< remainingwords("the quick brown fox")<<endl;
    return 0;
}
string firstword(string s)
{
    return s.substr(0,s.find(" "));
}

string remainingwords(string s)
{
    return s.substr(s.find(" ")+1);
}
