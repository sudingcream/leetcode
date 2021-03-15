class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var sum: Int = 0
        
        for i in 0..<nums.count{
            sum = nums[i] + nums[i+1]
            if(sum == target){
                return [i,i+1]
            }
        }
        return []
    }
}
