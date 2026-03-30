class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // int n = nums.zise();
        unordered_map<int, int> temp;
        for( int i = 0;i<nums.size();i++){
            temp[nums[i]]++;
            if( temp[nums[i]] > 1 ){
                return true;
            }
        }
        return false;
    }
};