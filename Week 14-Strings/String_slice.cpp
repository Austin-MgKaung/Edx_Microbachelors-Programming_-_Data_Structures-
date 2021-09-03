#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    char ch;

    str1 ="abcdefg";
    cout<<str1[0]<<" "<<str1[1]<<" "<<str1[2]<<endl;
    ch=str1[3];
    cout<<ch<<endl;
    cout<<str1.substr(3,2)<<endl;// start index , length it is not function method
    str2 = str1.substr(2,3);
    cout<<str2<<endl;

    return 0;
}