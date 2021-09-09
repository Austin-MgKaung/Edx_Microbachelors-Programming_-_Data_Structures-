#include<iostream>
#include<string>
using namespace std;

void printAscandDesc (int start, int end);
int main()
{
    printAscandDesc(1,8);
    return 0; 
}

void printAscandDesc (int start, int end)
{
    if (start == end)
        cout<<start<<endl;
    else
        {
            cout<<start<<endl;
            printAscandDesc(start+1,end);
            cout<<start<<endl;
        }
}