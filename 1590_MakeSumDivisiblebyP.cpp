class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
   int remainder = 0;
        for (int& num : nums) {
            remainder = (remainder + num) % p;
        }
        if (remainder == 0) {
            return 0;
        }
        unordered_map<int, int> modIndexMap;
        modIndexMap[0] = -1;
        int n = nums.size();
        int minLength = n;
        int currentSum = 0; 
        for (int i = 0; i < n; ++i) {
            currentSum = (currentSum + nums[i]) % p;
            int target = (currentSum - remainder + p) % p;
            if (modIndexMap.count(target)) {
                minLength = min(minLength, i - modIndexMap[target]);
            }
            modIndexMap[currentSum] = i;
        }
        return minLength == n ? -1 : minLength;
    }
};
