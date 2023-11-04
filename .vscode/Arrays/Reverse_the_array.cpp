#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        reverse(str.begin(),str.end());
        
        return str;
    }
};



/*
class Solution
{
    public:
    string reverseWord(string str)
    {
        int size = str.size();
        for(int i=0;i<size/2;++i){
            swap(str[i],str[size-i-1]);
        }
        
        return str;
    }
};
*/
