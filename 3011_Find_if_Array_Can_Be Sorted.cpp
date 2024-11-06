class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int i=0,n=1,c=0,s=0;
        while(n)
        {
            n=0;
            i=0;
            while(i<nums.size()-1)
            {
                if(nums[i]>nums[i+1])
                {
                    n=1;
                    int sum[2]={0},j=0;
                    if(c==i+1)
                    {
                        j=1;
                        sum[0]=s;
                    }
                    while(j<2)
                    {
                        int x=nums[i+j];
                        while(x>0)
                        {
                            sum[j]=sum[j]+(x%2);
                            x/=2;
                        }
                            j++;
                    }
                    c=i+1;
                    s=sum[1];
                    if(sum[0]==sum[1])
                    {
                        int temp=nums[i];
                        nums[i]=nums[i+1];
                        nums[i+1]=temp;
                        continue;
                    }
                    return false;
                }
                i++;
            }
        }
        return true;
    }
};
