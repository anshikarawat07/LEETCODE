
int* twoSum(int* nums, int numSize, int target, int* returnSize) 
{
    int i,j;
    *returnSize=2;
    int *array=malloc(2*sizeof(int));
    for(i=0;i<numSize;i++)
    {
        for(j=i+1;j<numSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                array[0]=i;
                array[1]=j;
                return array;
            }
        }
        if(j!=numSize)
        return -1;
    }
    
}
