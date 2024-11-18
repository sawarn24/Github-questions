class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=size(nums)-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
        
    }
};