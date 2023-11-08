class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int ans = 0;
        while (!s.empty()) {
            int i = s.find(s.back());

            if (i == s.length() - 1) {
                ans += (i / 2);
            } else {
                ans += i;
                s.erase(i, 1);
            }

            s.pop_back();
        }

        return ans;
    }
};


// int minMovesToMakePalindrome(string s) {
//         int n = s.size();
//         int left = 0, right = n-1, count = 0;
//         while(left<right){
//             int l = left, r = right;
//             while(s[l] != s[r]) r--;
//             if(l==r){
//                 swap(s[r], s[r+1]);
//                 count++;
//                 continue;
//             }
//             else{
//                 while(r<right){
//                     swap(s[r],s[r+1]);
//                     count++;
//                     r++;
//                 }
//             }
//             left++;
//             right--;
//         }
//         return count;
//     }