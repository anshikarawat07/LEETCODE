class Solution {
public:
    int maximumSwap(int num) {
    string nums=to_string(num);
    int index=nums.length()-1,maximum=num;
    char maxs=nums[index];
    for(int i=nums.length()-2;i>=0;i--)
    {
        nums=to_string(num);
        int n1 =maxs - '0'; 
        int n2 =nums[i]- '0';
        if(n1==n2)
        continue; 
        else if(n1>n2)
        {
            char temp=nums[index];
            nums[index]=nums[i];
            nums[i]=temp;
            int x=stoi(nums);
            maximum=max(x,maximum);
        }
        else
        {
            maxs=nums[i];
            index=i;
        }
    }
    return maximum;
    }
};
