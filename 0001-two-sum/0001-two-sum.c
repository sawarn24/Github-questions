/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   int* ans = (int*)malloc(2 * sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
     for(int j=0;j<numsSize;j++)
     {
        if(nums[i]+nums[j]==target&& i!=j)
        {
            ans[0]=i;
            ans[1]=j;
            *returnSize = 2; 
            return ans;
        }

     }
    }
    *returnSize = 0;
    free(ans); 
    return NULL;
}