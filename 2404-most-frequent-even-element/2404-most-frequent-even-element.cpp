class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxi=0,res=INT_MAX;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                m[nums[i]]++;
                int j=m[nums[i]];
                if(j>maxi)
                {
                    maxi=max(maxi,j);
                    res=nums[i];
                }
                else if(j==maxi && res>nums[i])
                    res=nums[i];
            }
        }
        return res==INT_MAX ? -1 : res;
    }
};
