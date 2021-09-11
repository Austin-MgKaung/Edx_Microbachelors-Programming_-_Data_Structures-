#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    ofstream  outfile;//ofstream outfile("outfile.txt")
    outfile.open("outfile.txt");
    outfile<<"Hello world."<<endl;
    return 0;
}
