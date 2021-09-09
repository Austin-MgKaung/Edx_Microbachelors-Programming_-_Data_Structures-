#include<iostream>
#include<string>
using namespace std;

void printAsc (int start, int end) ;
int main()
{
    printAsc(1,5);
    return 0; 
}

void printAsc (int start, int end)
{
    if (start == end)
        cout<<start<<endl;
    else
    {
        cout<<start<<endl;
        printAsc(start+1,end);

    }
}