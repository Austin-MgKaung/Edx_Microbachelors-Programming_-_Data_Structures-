float avgoflst(int lst[], int size)
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