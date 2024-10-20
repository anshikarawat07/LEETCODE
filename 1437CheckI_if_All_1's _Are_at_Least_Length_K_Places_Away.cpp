class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int c = -1;  
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {  
                if(c != -1) {  
                    if((i - c) <= k) 
                        return false;
                }
                c = i; 
            }
        }
        return true;  
    }
};
