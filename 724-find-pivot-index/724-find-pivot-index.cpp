class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lo=0,hi=nums.size()-1;
        int ls=0,rs=0;
        for(auto i:nums)
        {
            ls += i;
        }
        for(int i=0;i<=hi;i++)
        {
            rs += nums[i];
            
              if(rs == ls )
                return i;
            
            ls -=nums[i];
        }
        return -1;
    }
};