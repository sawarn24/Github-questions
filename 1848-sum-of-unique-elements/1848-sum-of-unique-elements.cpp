class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            
            if ((i == 0 || nums[i] != nums[i-1]) && (i == nums.size()-1 || nums[i] != nums[i+1]))  
             {
                sum += nums[i];  
            }
        }

        return sum;
        
    }
};