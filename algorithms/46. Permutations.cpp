class Solution {
public:
    void solve(vector<int>& nums, int l, int r, vector<vector<int>>& ans) {
        if(l == r){
            ans.push_back(nums);
            return;
        }
        for(int i=l; i<=r; i++){
            //swap
            swap(nums[i], nums[l]);
            //recursion
            solve(nums,l+1,r,ans);
            //backtrack
            swap(nums[i], nums[l]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(nums, 0, nums.size()-1, ans);
        return ans;
    }
};
