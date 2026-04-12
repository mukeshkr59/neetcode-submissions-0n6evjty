class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        for ( int i = 0;i<nums.size();i++){
            for( int j = 0 ; j<nums.size();j++){
                if( j != i){
                    ans[i] = ans[i] * nums[j] ;
                }
            }
        }
        return ans;
    }
};
