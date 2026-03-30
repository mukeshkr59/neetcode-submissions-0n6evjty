class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int zeros=0;
        for(int num : nums){
            if(num!=0){
                prod=prod*num;
            } else{
                zeros++;
            }
        }

        if(zeros>1){
            return vector<int>(nums.size(), 0);
        }

        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            if(zeros>0){
                if(nums[i]==0){
                    res[i]=prod;
                } else{
                    res[i]=0;
                }
            } else{
                res[i]=prod/nums[i];
            }
        }
        return res;
    }
};
