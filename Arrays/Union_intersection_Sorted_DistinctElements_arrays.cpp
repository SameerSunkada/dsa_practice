#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	int Union = 0, Intersection = 0;
	int i=0,j=0;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			i++;j++;
			Intersection++;
		}
		else{
			if(arr1[i]<arr2[j]) i++;
			else j++;
		}
		Union++;
	}
	if(i<n) Union+=(n-i);
	if(j<m) Union+=(m-j);
	pair<int,int>ans = {Intersection,Union};

	return ans;
}