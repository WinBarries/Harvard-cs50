/**{
    // TODO: implement a searching algorithm
    //return false;
    if (max < min)
    {
        return false;
    }
    else if (values[max] == value)
    {
        return true;
    }
    else if (values[min] == value)
    {
        return true;
    }
    else
    {
        int midpoint = (max + min) / 2;
        
        if (values[midpoint] < value)
        {
            binarysearch(value, values, midpoint + 1, max);
        }
        
        else if (values[midpoint] > value)
        {
            binarysearch(value, values, midpoint - 1, min);
        }
        else
        {
            return midpoint;
        }
    }  
    return 0; 
}
bool search(int value, int values[], int n)
{
    return binarysearch(value, values, 0, n);
}
**/
