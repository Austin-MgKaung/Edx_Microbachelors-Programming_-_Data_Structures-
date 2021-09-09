#include<iostream>
using namespace std;


void merge(int arr [],int left ,int middle,int right);
void merge_sort(int arr[],int left , int right);
void printArray(int arr[],int arrSize);
int main()
{
    int arr[8] = {14,5,8,10,13,1,18,3};
    int arrSize = 8;
    merge_sort(arr,0,arrSize-1);
    printArray(arr,arrSize);
    return 0;
}

void printArray(int arr[],int arrSize)
{
    int i;
    for(i=0; i<arrSize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr [],int left ,int middle,int right)
{
    int iRight,iLeft,iRes;
    int i,iArr;
    int mid_plus_one,size;
    int *mergedArr;

    mid_plus_one =middle + 1;
    size = right - left + 1;
    mergedArr = new int [size];

    iLeft = left;
    iRight = mid_plus_one;
    iRes = 0;

    while (iLeft <= middle && iRight <= right)
    {
        if(arr[iLeft] < arr[iRight])
        {
            mergedArr[iRes]= arr[iLeft];
            iLeft++;
            iRes++;
        }
        else
        {
            mergedArr[iRes]= arr[iRight];
            iRight++;
            iRes++;
        }
    }

    while (iLeft <= middle)
    {
        mergedArr[iRes]= arr[iLeft];
        iLeft++;
        iRes++;
    }

    while (iRight <= right)
    {
        mergedArr[iRes]= arr[iRight];
        iRight++;
        iRes++;
    }
    
    for(i=0, iArr=left; i<size; i++, iArr++)
    {
        arr[iArr]=mergedArr[i];
    }

    delete [] mergedArr;
    
}

void merge_sort(int arr[],int left , int right)
{
    int mid;

    if (left == right)
        return;
    else
    {
        mid = (left+right)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}