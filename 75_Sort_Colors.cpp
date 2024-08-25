class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0,m=0,e=nums.size()-1;//s-start m-mid e-end
        while(m<=e)
        {
            if(nums[m]==2)
            {
                nums[m]=nums[e];
                nums[e]=2; 
                e--;
            }
            else if(nums[m]==0)
            {
                nums[m]=nums[s];
                nums[s]=0;
                s++;
                m++;
            }
            else
            m++;
        }
        return ;
    }
};
