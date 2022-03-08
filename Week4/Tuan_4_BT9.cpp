void sort(float array[], int size, bool isAscending)
{
    if (isAscending)
    {
        for (int i=0;i<size;i++)
        {
            for (int j=i;j<size;j++)
            {
                if (array[i]>array[j])
                {
                    float tmp=array[i];
                    array[i]=array[j];
                    array[j]=tmp;
                }
            }
        }
    }
    else
    {
        for (int i=0;i<size;i++)
        {
            for (int j=i;j<size;j++)
            {
                if (array[i]<array[j])
                {
                    float tmp=array[i];
                    array[i]=array[j];
                    array[j]=tmp;
                }
            }
        }
    }
}
