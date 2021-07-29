#include <iostream>

using namespace std;

int main ()
{
    char ch ;
    ch = 'a';
    cout<<'b'<<endl;
    // char ch0 = "a"; Error
    //cout<<'\n' == cout<<endl;

    char ch1,ch2;
    ch1='a';
    ch2='a'+1; 
    cout<<" 'a ' is "<<ch1<<endl; // a
    cout<<" 'a' + 1 is (ch2) "<<ch2<<endl; //Type Casting b
    cout<<'a'+1<<endl; //98
    cout<<(char)('a'+1)<<endl;// b

    return 0;

}