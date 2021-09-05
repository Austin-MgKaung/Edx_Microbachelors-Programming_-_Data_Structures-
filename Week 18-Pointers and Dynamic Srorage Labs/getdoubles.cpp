double * getDoubles (int numDoubles)
{
    double * arr = new double[numDoubles];
    for (int i = 1 ; i <= numDoubles ; i++)    
        arr[i-1] = (double)i / 3.0;
    return arr;

}