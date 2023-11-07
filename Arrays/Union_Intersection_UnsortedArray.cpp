#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	unordered_map<int,int>m1,m2;
	for(int i : arr1) m1[i]++; 
	for(int i : arr2) m2[i]++; 
	int Union = 0, Intersection = 0;
	for(auto i : m1){
		if(m2.find(i.first)!=m2.end()){
			Intersection++;
			m2.erase(i.first);
		}
		Union++;
	}
	Union+=m2.size();
	pair<int,int>ans = {Intersection, Union};
	
	return ans;
}