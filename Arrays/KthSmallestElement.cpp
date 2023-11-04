class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        int p=l;
        for(int i=l;i<r;++i){
            if(arr[i]<=arr[r]){
                swap(arr[i],arr[p]);
                p++;
            }
        }
        swap(arr[p], arr[r]);
        if(p<k-1) kthSmallest(arr, p+1, r, k);
        else if(p>k-1) kthSmallest(arr, l, p-1, k);
        else return arr[p];
    }
};

/*
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+r+1);
        return arr[k-1];
    }
};
*/