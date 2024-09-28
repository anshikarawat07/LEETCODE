class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count_of_value;
        for(int value:nums)
        {
         count_of_value = count(nums.begin(), nums.end(), value);
         if(count_of_value>=float(nums.size())/2)
            return value;
    }  
    return 0 ;
    }
};
