#include<iostream>

using namespace std;

int main ()
{
    char a;
    cout <<"Enter a character: ";
    cin>> a;
    if ( a >= 48 && a <= 57)
        cout<<a<<" is  a digit."<<endl;
    else if(a >= 65 && a <= 90)
        cout<<a<<" is  an  upper case  letter."<<endl;
    else if(a >= 97 && a <= 122)
        cout<<a<<" is  a lower case  letter."<<endl;
    else
        cout<<a<<" is  a non-alphanumeric  character."<<endl;
    return 0;
}