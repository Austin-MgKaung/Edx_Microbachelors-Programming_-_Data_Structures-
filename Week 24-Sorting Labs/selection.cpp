#include "cpluspluslabs.h"
int findIndexofMin(int arr[],int low,int high)
{
    int min,minInd;
    int i;
    
    min = arr[low];
    minInd = low;
    for (i=low+1;i<=high;i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
            minInd = i;
        }
    }
    return minInd;
}

void selection_sort(int arr[],int elements)
{
    int i ,minInd;
    for(i=0; i<elements; i++)
    {
        minInd = findIndexofMin(arr,i,elements-1);
        swap(&arr[i],&arr[minInd]);
    }
}