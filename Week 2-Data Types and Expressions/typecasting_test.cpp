#include<iostream>
#include<typeinfo>
using namespace std ;

int main()
{
    int x1,x2;
    double y1,y2;

    x1 = 6;
    y1 = 6.7;

    y2 = 6 ;//This is not working we hace to type cast it
    y2 = (double)6;
    x2 = (int)6.7;//6

    cout<<"x1 "<<x1 <<typeid(x1).name()<<endl;
    cout<<"x2 "<<x2 <<typeid(x2).name()<<endl;
    cout<<"y1 "<<y1 <<typeid(y1).name()<<endl;
    cout<<"y2 "<<y2 <<typeid(y2).name()<<endl;

    return 0 ;
}