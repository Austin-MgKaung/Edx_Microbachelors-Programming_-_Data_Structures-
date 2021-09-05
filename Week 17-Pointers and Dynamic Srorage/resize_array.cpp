#include<iostream>

using namespace std;

void resizeArray (int * & arr,int currentsize, int newsize) ;

int main()
{
    int size = 10;
    int * arr = new int [size];
    for (int i = 0 ; i < size ; i++)
        arr[i] = i* 10;
    
    int oneMore = 110;
    int newsize = size *2;
    resizeArray(arr,size,newsize);
    arr[size++]= oneMore;
    size=newsize;
    return 0 ;
}

void resizeArray (int * & arr,int currentsize, int newsize)
{
    int * temp = new int [newsize];
    for(int i = 0 ;i < currentsize;i++)
        temp[i] = arr[i];
    delete [] arr;
    arr = temp;
}