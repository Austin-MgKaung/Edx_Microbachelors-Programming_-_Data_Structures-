#include<iostream>
 using namespace std;

void swap (int *xp,int *yp);
int findIndexofMin(int arr[],int low,int high);
void selection_sort(int arr[],int arrSize);

int main()
{
    int lst[] = {19, 2, 20, 1, 0, 18};
    selection_sort(lst,6);
    for(int k = 0 ; k < 6;k++)
        cout<<lst[k]<<endl;
    return 0;
}

void swap (int *xp,int *yp)
{
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}

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