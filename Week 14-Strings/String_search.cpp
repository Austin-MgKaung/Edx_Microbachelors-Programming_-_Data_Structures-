#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str ="abcdbcdefg";

    cout<<str.find("de")<<endl;// give starting index
    
    if(str.find("xyz") == string::npos) // it is a value return if there is no string found
        cout<<"Not found"<<endl;
    else
        cout<<"Found"<<endl;
    
    cout<<str.find("cd")<<endl; 
    cout<<str.find("cd",3)<<endl;// add which index you wanna start from 
    return 0;
}