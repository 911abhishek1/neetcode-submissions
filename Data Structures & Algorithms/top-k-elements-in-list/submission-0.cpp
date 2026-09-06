class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        unordered_map<int, int> mpp;
        for(int &num : nums){
            mpp[num]++;
        }
        for(auto it : mpp){
            minh.push({it.second, it.first});
            if(minh.size() > k) minh.pop();
        }
        vector<int>res;
        while(!minh.empty()){
            res.push_back(minh.top().second);
            minh.pop();
        }
        return res;
    }
};
