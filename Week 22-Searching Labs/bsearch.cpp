#include<iostream>
using namespace std;

int binary_search(int search_value, int lst [], int elements);
/*
int main ()
{
    int lst[] = {0, 1, 2, 18, 19, 20, 25};
    cout<<binary_search(20, lst, 7)<<endl;
    return 0 ;
}
*/
int binary_search(int search_value, int lst [], int elements)
{
    int low,high,mid;
    int ind,j= 0,k=0;
    bool found;

    low = 0;
    high = elements - 1;
    found = false;

    while ((found == false) && (low <= high))
    {
        mid = (low+high)/2;
        
        if(lst[mid] == search_value)
        {
            k++;
            ind = mid;
            found = true;
        }
        else if (search_value< lst[mid])
        {
            k++;
            high = mid - 1;
        }
        else // search_value > lst[mid]
        {
            k++;
            low = mid +1;
        }
            
    }

    if (found == true)
        return k;
    else
        return k;

}