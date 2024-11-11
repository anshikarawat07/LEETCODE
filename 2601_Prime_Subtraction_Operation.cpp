class Solution {
public:
    bool primeSubOperation(vector<int>& nums) 
    {
        if (isStrictlyIncreasing(nums))
        return true;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=nums[i]-1;j>1;j--)
            {
                if(isPrime(j)==1)
                {
                    if(i==0){
                    nums[i]-=j;
                    break;
                    }
                    else if ( i!=0 && nums[i]-j>nums[i-1])
                    {   
                        nums[i]-=j;
                        break;
                    }
                }
            }
        if( i!=0 && nums[i]<nums[i-1])
        return false;
        if (isStrictlyIncreasing(nums))
        return true;
        }
    return false;
        
    }

    bool isPrime(int num) {
        if (num <= 1) 
        return false;
        if (num == 2 || num == 3) 
        return true;
        if (num % 2 == 0 || num % 3 == 0) 
        return false;
        for (int i = 5; i * i <= num; i += 6) 
        {
            if (num % i == 0 || num % (i + 2) == 0) 
            return false;
        }
        return true;
}
 bool isStrictlyIncreasing(const vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1])
                return false;
        }
        return true;
    }
};
