class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> v;
        for(auto i:nums)
        {
            map[i]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto x:map)
        {
            pq.push({x.second,x.first});
        }
        
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};