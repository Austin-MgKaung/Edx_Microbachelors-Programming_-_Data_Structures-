#include<iostream>
using namespace std;

int main()
{
    int x ;
    double y ;
    //O based index
    int arr [5];

    // not int arr[];

    // Array physical size must be constant 
    const int d = 7;
    int arr2 [d];

    //not int n = 7;
    // int arr[n];
    x = 4 ;
    y = 7.3 ;
    arr[2] = 10 ;
    arr[4] = 14 ;

    return 0;
}