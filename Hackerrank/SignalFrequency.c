//From a test I did on 29/03/2021 for a Company in Budapest,Hungary.
/*
 * Complete the 'updateTimes' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY signalOne
 *  2. INTEGER_ARRAY signalTwo
 */

int updateTimes(int signalOne_count, int* signalOne, int signalTwo_count, int* signalTwo)
{
    int maxEqual =0;
    int limit;
    if(signalOne_count> signalTwo_count)
    {
        limit = signalTwo_count;
    }
    else
        limit = signalOne_count;

    for(int i =0;i<limit;i++)
    {
        int count = 0;
        while(*(signalOne+i)==*(signalTwo+i)&&i<limit)
        {
            count++;
            i++;
        }
        if(count>=maxEqual)
            maxEqual = count;
    }
    return maxEqual;
}
