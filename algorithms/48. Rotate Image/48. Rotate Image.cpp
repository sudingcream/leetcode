class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
			// Transpose
                int temp=nums[i][j];
                nums[i][j]=nums[j][i];
                nums[j][i]=temp;
            }
        }

        for(int i=0;i<n;i++){
            reverse(nums[i].begin(),nums[i].end());
        }
    
    }  
};
