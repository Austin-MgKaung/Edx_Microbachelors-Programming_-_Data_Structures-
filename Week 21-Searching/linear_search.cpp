#include<iostream>
using namespace std;

int search (int arr[],int arrSize,int val);

int main ()
{
    int arr_1 [6]= {5,8,12,7,8,10};
    cout<<search(arr_1,6,7)<<endl;
    cout<<search(arr_1,6,3)<<endl;
    return 0;
}

int search (int arr[],int arrSize,int val)
{
    int i ;

    i = 0;
    while (i<arrSize)
    {
        if (arr[i] == val) 
            return i;
        i++;
    }
    return -1;
}