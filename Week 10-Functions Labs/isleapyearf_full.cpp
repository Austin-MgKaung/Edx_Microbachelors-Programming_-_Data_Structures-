#include<iostream>
using namespace std;

bool isleapyear(int inyear);

int main()
{
    int u_year;
    cout<<"Please enter the year?"<<endl;
    cin>>u_year;
    if(isleapyear(u_year))
        cout<<u_year<<" was a leap year"<<endl;
    else
        cout<<u_year<<" was  not a leap year"<<endl;
    return 0;
}

bool isleapyear(int inyear)
{
    if (inyear % 4== 0 && inyear % 100 != 0)
    {   
        return true;
    }
    else 
    {   
        if ( inyear % 100 == 0 && inyear % 400 == 0)
        {
            return true;
        }
        else
            return false;
    }
}