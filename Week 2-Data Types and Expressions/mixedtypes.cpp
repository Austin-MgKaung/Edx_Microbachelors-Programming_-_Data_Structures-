#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    int x ;
    double y;
    cout<<5/2<<endl; //2
    cout<<5.0/2.0<<endl;//2.5 real division
    cout<<5.0/2<<endl;//2.5 implicit cast

    x=5/2;// int

    y=5/2; //2 double
    //two step in evaluation
    //1st step is evaluating the right handside
    //2nd step value is assign the variable

    cout<<x<<typeid(x).name()<<endl;
    cout<<y<<typeid(y).name()<<endl;

    return 0 ;

}