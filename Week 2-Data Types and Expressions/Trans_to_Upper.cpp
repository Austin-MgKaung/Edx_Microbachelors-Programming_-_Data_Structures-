#include <iostream>
using namespace std;

int main()
{
    char lowerCaseletter,upperCaseletter;
    int offset;
    cout<<"Please enter a lower case letter : "<<endl;
    cin>>lowerCaseletter;

    offset =(int) (lowerCaseletter - 'a');
    upperCaseletter =(char)('A'+offset);
    cout<<"The upper case of "<<lowerCaseletter<<" is "<<upperCaseletter<<endl;

    return 0;
}