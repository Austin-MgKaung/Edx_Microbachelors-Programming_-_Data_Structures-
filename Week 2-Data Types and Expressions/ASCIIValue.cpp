#include<iostream>
using namespace std;

int main(){
    char inputchar;
    int asciivalue;

    cout<<"Please enter a character :"<<endl;
    cin>>inputchar;

    asciivalue = (int)inputchar;

    cout<<"The ASCII value of "<<inputchar<<" is "<<asciivalue<<endl;

    return 0;

}

/* 
Please enter a character :
c
The ASCII value of c is 99

Please enter a character :
fgf
The ASCII value of f is 102

*/