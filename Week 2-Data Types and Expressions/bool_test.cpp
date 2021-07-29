#include<iostream>
using namespace std;

int main()
{   
    //NOT 
    bool b1,b2,b3;
    b1 = true;//true    
    b2 = !b1;//false
    b3 = !false;

    cout<<b1<<'\t'<<b2<<'\t'<<b3<<endl;

    //AND
    bool b4,b5;
    b4 = b1 && b2;
    b5 = b1 && !b2;

    cout<<b4<<'\t'<<b5<<endl;

    // OR

    bool b6,b7,b8;

    b6 = b2;//false
    b7 = b6 || !b6;
    b8 = b7 && (b6 || true);

    cout<<b6<<'\t'<<b7<<'\t'<<b8<<endl;
    return 0 ;



}