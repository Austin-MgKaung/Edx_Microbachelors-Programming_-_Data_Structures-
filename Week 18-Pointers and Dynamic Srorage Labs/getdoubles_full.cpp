#include<iostream>

using namespace std;

double * getDoubles (int numDoubles);

int main()
{   
    int num ;
    cout<<"Please enter how many elements do you want? : "<<endl;
    cin>>num;
    double * m_arr;
    m_arr= getDoubles(num);
    for (int i = 0 ; i <num ; i++)
        cout<<m_arr[i]<<" ";
    cout<<endl;

    return 0;
}

double * getDoubles (int numDoubles)
{
    double * arr = new double[numDoubles];
    for (int i = 1 ; i <= numDoubles ; i++)    
        arr[i-1] = (double)i / 3.0;
    return arr;

}