#include<iostream>
using namespace std;

int main()
{
    int u_num,f_num=1,s_num=1,c_num;
    cout<<"Please enter a positive integer greater than 1:";
    cin>>u_num;
    for (int i = 0 ;i < u_num;i++)
    {
        if (i == 0 || i == 1)
        {
            c_num=f_num;
            cout<<c_num<<endl<<endl;
        }
        else
        {
            c_num =f_num + s_num;
            cout<<c_num<<endl<<endl;
            f_num = s_num;
            s_num = c_num;
        }
    }
    return 0;
}
