#include<iostream>
#include <iomanip>
using namespace std;

float bmimetricf(int weight,float height);
int main()
{
     float weight ;
    float height ;
    cout<<"Please enter weight in kilograms: ";
    cin>>weight;
    cout<<"Please enter height in meters: ";
    cin>>height;
    cout<<"BMI is: "<<bmimetricf(weight,height)<<endl;
    return 0;
}


float bmimetricf(int weight,float height)
{   
    cout<<fixed<<setprecision(2);
    float result = weight/(height*height);
    return result;
}