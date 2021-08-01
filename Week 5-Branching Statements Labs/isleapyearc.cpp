#include<iostream>
#include<typeinfo>
using namespace std;

int main( int argc ,char* argv[])
{   
    if(argc<2)
    {
        cout<<"Please enter command line variable!"<<endl;
        return 0;
    }

    int year = stoi(argv[1]);
    // cout<<"Type of argv[1] is "<<typeid(argv[1]).name()<<endl;
    // cout<<"Type of year is "<<typeid(year).name()<<endl;

    if (year % 4== 0 && year % 100 != 0)
    {   
        cout<<year<<" was a leap year"<<endl;
    }
    else 
    {   
        if ( year % 100 == 0 && year % 400 == 0)
        {
            cout<<year<<" was a leap year"<<endl;
        }
        else
            cout<<year<<" was not a leap year"<<endl;
    }
    return 0;
}