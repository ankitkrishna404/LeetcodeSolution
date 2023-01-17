class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        vector<int> ans;
        for(int it=1;it<=nums.size();it++)
        {
            if(!s.count(it))
                ans.push_back(it);
        }
        return ans;
    }
};