#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    int x;
    float y ;//4bytes 32 bits
    double z;//8 bytes 64 bits
    x = 6 ;
    y = 7.658;
    z = 3.4;

    cout<<"x is "<<x<<typeid(x).name()<<endl;
    cout<<"y is "<<y<<typeid(y).name()<<endl;
    cout<<"z is "<<z<<typeid(z).name()<<endl;

    return 0 ;

}