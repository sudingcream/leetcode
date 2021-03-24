class Solution {
    func maxSubArray(_ nums: [Int]) -> Int {
        var sum = nums[0];
        
        for i in 1..<nums.count{
            sum += nums[i] + nums[i-1]
            sum = sum > nums[i] ? sum : nums[i]
        }// end for 
        return sum
    
    }// end func
}
