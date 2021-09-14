#include<iostream>
#include<string>

using namespace std;

template <class T>

void mySwap(T & a, T&b)
{
    T temp = a;
    a = b ; 
    b = temp;
}
