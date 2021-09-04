#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

float bmimetricf(int weight,float height);
string status (float bmi );

int main()
{
     float weight ;
    float height ;
    float result;
    cout<<"Please enter weight in kilograms: ";
    cin>>weight;
    cout<<"Please enter height in meters: ";
    cin>>height;
    cout<<fixed<<setprecision(2);
    result = bmimetricf(weight,height);
    cout<<"BMI is: "<<result<<", Status is "<<status(result)<<endl;
    return 0;
}


float bmimetricf(int weight,float height)
{   
    float result = weight/(height*height);
    return result;
}

string status (float bmi )
{
    if (bmi < 18.5)
        return "Underweight";
    else if (18.5 <= bmi && bmi <=24.9)
        return "Normal";
    else if (25.0 <= bmi && bmi <=29.9)
        return "Overweight";
    else if (bmi >= 30.0)
        return "Obese";
    else 
        return "Error";
}