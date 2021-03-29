class Solution {
public:
    int climbStairs(int n) {
       int array[n+2];
        array[0]=0;
        array[1]=1;
        array[2]=2;
        for(int i=3; i<n+1 ; i++){
            array[i] = array[i-1] + array[i-2]; 
        }// end for
        return array[n];
    }// end func
};
