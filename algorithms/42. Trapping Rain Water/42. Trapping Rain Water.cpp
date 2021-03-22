class Solution {
public:
    int trap(vector<int>& height) {
        int answer=0;
        
        if(height.size()==0){ return 0; }
        
        int left[height.size()];
        int right[height.size()];
        int lmax=height[0];
        int rmax=height[height.size()-1];
        
        for(int i=0;i<height.size();i++){
            if(height[i]>left_max)
                left_max=height[i];
            left[i]=left_max;
        }
        
    
        for(int i=height.size()-1;i>=0;i--){
            if(height[i]>right_max)
                right_max=height[i];
            right[i]=right_max;
        }

        for(int i=0;i<height.size();i++){
           answer+=min(left[i],right[i])-height[i]; 
        }
        return answer;
    }
};

