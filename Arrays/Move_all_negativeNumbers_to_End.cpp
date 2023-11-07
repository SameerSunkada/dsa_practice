void segregateElements(int arr[],int n)
{
    vector<int>pos,neg;
    for(int i=0;i<n;++i){
        if(arr[i]>=0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }
    int i=0;
    for(;i<pos.size();++i) arr[i] = pos[i];
    for(int j=0;i<n;++i,++j) arr[i] = neg[j];
}