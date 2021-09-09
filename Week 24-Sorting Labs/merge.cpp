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
