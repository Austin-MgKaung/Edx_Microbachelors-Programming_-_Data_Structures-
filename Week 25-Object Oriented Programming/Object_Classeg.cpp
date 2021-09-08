#include<iostream>
#include<string>
using namespace std; 


class MyClass {//The class
    public: //Access specifier 
    int myNum ;//Attribute (int variable)
    string myString;//Atrribute (string variable)

};
int main()
{   
    MyClass myObj; //Create an object of MyClass

    //Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some Text";

    //Print attribute values
    cout<<myObj.myNum<<endl;
    cout<<myObj.myString<<endl;
    return 0 ;
}