int maximumSumOfNonAdjacentElements(vector<int> arr, int n)
{
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    int i;
 
    for (i = 1; i < n; i++) {
        excl_new = max(incl, excl);
        incl = excl + arr[i];
        excl = excl_new;
    }

    return max(incl, excl);
}