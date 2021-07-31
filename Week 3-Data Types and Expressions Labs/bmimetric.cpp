#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float weight ;
    float height ;
    cout<<"Please enter weight in kilograms: ";
    cin>>weight;
    cout<<"Please enter height in meters: ";
    cin>>height;
    cout<<"BMI is: "<<fixed<<setprecision(2)<<(weight/(height*height))<<endl;
    return 0;
}