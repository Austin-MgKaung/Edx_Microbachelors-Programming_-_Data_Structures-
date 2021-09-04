int maxabsinlst(int lst[],int size)
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
