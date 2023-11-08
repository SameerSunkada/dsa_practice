int minMovesToMakePalindrome(string s) {
        int n = s.size();
        int left = 0, right = n-1, count = 0;
        while(left<right){
            int l = left, r = right;
            while(s[l] != s[r]) r--;
            if(l==r){
                swap(s[r], s[r+1]);
                count++;
                continue;
            }
            else{
                while(r<right){
                    swap(s[r],s[r+1]);
                    count++;
                    r++;
                }
            }
            left++;
            right--;
        }
        return count;
    }