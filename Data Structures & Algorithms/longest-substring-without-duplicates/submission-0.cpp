class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>hash(256,0);
        int left = 0;
        int right = 0;
        int n = s.size();
        int len = 0;
        while(right < n){
            while(hash[s[right]]){
                hash[s[left]] = 0;
                left++;
            }
            len = max(len,right-left+1);
            hash[s[right]] = 1;
            right++;
        }
        return len;
    }
};
