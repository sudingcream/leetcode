class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0]; 
        for(int i=1; i < nums.size(); i++){
            sum += nums[i] + nums[i-1];
            sum = sum > nums[i] ? sum : nums[i];
        }
        
        return sum;
    }// end func 
};
