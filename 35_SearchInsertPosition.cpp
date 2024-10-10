class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0,size = nums.size(),c;
         while (l < size) {
             c = (l + size) / 2;
            if (nums[c] == target)
                return c;
            if (nums[c] < target)
                l = c + 1;
            else
                size= c;
    }
    return l;
    }
};
