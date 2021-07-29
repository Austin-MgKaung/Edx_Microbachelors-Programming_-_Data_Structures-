#include<iostream>
#include<string>

using namespace std;

int main()
{
    int x ;
    double y ;
    string s;

    x = 5 ;
    y = 7.4;
    s = "Hello";

    cout<<s<<endl;//Hello
    cout<<s + "world"<<endl;//Hello world
    s = s + "world";
    cout<<s<<endl;//hello world
    return 0;

}