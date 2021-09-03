#include<iostream>
using namespace std; 

int maxinlist(int lst[], int size);
int maxabsinlist(int lst[],int size);
float avgoflist(int lst[], int size);

int main()
{   
    int u_size;
    int max_num ,abs_max_num;
    float average_num;
    cout<<"Please enter the size of array : ";
    cin>>u_size;
    const int arr_size = u_size;
    int arr[arr_size];

    // read the array 
    cout<<"Please enter array values(separated by space) :";
    for (int i = 0 ; i < arr_size ; i++ )
    {
        cin>>arr[i];
    }
    max_num = maxinlist(arr,arr_size);
    abs_max_num = maxabsinlist(arr,arr_size);
    average_num = avgoflist(arr,arr_size);

    cout<<"Maximum number of array is "<<max_num<<endl;
    cout<<"Maximum absolute number of array is "<<abs_max_num<<endl;
    cout<<"Average number of array is "<<average_num<<endl;
    
    return 0;

}

int maxinlist(int lst[], int size)
{   
    int max_num = 0 ;
    for (int j = 0 ; j < size ; j++)
    {
        if (lst[j]> max_num)
            max_num = lst[j];
    }

    return max_num;
}

int maxabsinlist(int lst[],int size)
{
    int max_num = 0 ,threshold = 0;
    for( int j = 0 ; j < size ; j++)
    {
        if (lst[j] >= threshold)
        {
            if (lst[j]> max_num)
                max_num = lst[j];
        }
        else 
        {
            lst[j] *= -1;
            if (lst[j]> max_num)
                max_num = lst[j];
            
        }
    }

    return max_num;

}

float avgoflist(int lst[], int size)
{
    int sum = 0 ;
    float average ;
    for (int j = 0 ; j < size ; j++)
    {
        sum += lst[j];
    }

    average = (float)sum / (float)size;

    return average;
}