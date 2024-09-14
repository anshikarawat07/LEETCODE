class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size(),temp,i,j;
        k%=nums.size();
        for(i=0,j=n-k-1;i<j;i++,j--)
        {
            temp=nums[i];
            nums[i]=nums[j];   
            nums[j]=temp;     
        }
        for(i=n-k,j=n-1;i<j;i++,j--)
        {
            temp=nums[i];
            nums[i]=nums[j] ;  
            nums[j]=temp;   
        }
        for(i=0;i<n/2;i++)
        {
            temp=nums[i];
            nums[i]=nums[n-i-1];  
            nums[n-i-1]=temp;
        }

    }
};18
