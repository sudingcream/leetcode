// LeeCode 
// 1. TwoSum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0; 
        for(int i=0; i<nums.size();i++){
           sum = nums[i] + nums[i+1];
            if(sum == target){
               return {i,i+1};
            }
        }// end for 
        return {};
    }
};
