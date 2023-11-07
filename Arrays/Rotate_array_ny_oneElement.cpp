void rotate(int arr[], int n)
{
    int last = arr[n-1];
    int prev = arr[0];
    int curr = arr[0];
    for(int i=1;i<n;++i){
        curr = arr[i];
        arr[i] = prev;
        prev = curr;
    }
    arr[0] = last;
}