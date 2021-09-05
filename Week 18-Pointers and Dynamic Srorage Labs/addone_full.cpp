#include<iostream>

using namespace std;
void addOne(int *ptrNum);

int main()
{
    int num = 6;
    cout<<"Before Func :"<<num<<endl;
    addOne(&num);
    cout<<"After Func :"<<num<<endl;
    return 0;
}

void addOne(int *ptrNum)
{
    //cout<<*ptrNum<<endl;
    int temp = *ptrNum;
    //cout<<temp<<endl;
    temp++;
    //cout<<temp<<endl;
    *ptrNum = temp;


}