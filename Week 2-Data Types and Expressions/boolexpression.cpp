#include <iostream>
 using namespace std;
 int main()
 {
    bool b ;
    int x ;

    b = true ;
    b = (true && !b);
    cout<<b<<endl;
    x = 3 ;
    b = (x < 5);
    cout<<b<<endl;
    b = (x >= 0) && (x < 5);
    cout<<b<<endl;
    b = (x == 3) || ( x == 4);
    cout<<b<<endl;
    return 0;
 }