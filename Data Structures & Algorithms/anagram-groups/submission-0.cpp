class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<vector<int>,vector<string>> mpp;
        
        for(string word : strs){
            vector<int> hash(26,0);
            for(char c : word){
                hash[c-'a']++;
            }
            mpp[hash].push_back(word);
        }
        for(auto it : mpp){
            res.push_back(it.second);
        }
        return res;
    }
};
