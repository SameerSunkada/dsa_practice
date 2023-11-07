
int doUnion(int a[], int n, int b[], int m)  {
    int count = 0;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;++i) mpp[a[i]]++;
    for(int i=0;i<m;++i) mpp[b[i]]++;
    count =  mpp.size();
    
    return count;
}