class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0,maxSum=INT_MIN;
        for(int value:nums)
        {
            cs+=value;
            maxSum=max(cs,maxSum);
            if(cs<0)
                cs=0;
            
        }
        return maxSum ;
    }
};
