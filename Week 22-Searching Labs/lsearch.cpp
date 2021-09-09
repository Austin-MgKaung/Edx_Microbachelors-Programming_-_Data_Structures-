#include<iostream>

using namespace std;


int linear_search(int search_value, int lst[], int elements);

int main()
{
    int lst[] = {19, 2, 20, 1, 0, 18};

   cout<<linear_search(20, lst, 6)<<endl;
    return 0;
}

int linear_search(int search_value, int lst[], int elements)
{
    int i; 
    i = 0;
    while(i < elements)
    {
        if (lst[i]== search_value)
        {
            return i+1;
        }
        i++;
    }
    return i;
}