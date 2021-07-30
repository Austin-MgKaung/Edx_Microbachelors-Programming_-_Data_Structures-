#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float weight ;
    float height ;
    cout<<"Please enter weight in pounds: ";
    cin>>weight;
    weight = weight * 0.453592;
    cout<<"Please enter height in inches: ";
    cin>>height;
    height = height * 0.0254;
    cout<<"BMI is: "<<fixed<<setprecision(2)<<(weight/(height*height))<<endl;
    return 0;
}