#include<iostream>
#include<string>
using namespace std;

void printAsc (int start, int end) ;
int main()
{
    printAsc(1,8);
    return 0; 
}

void printAsc (int start, int end)
{
    int mid;
    if (start == end)
        cout<<start<<endl;
    else
        {
            mid = (start+end)/2;
            printAsc(start,mid);
            printAsc(mid+1,end);
        }
}