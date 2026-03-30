class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       set<int> stt;
       for(int i=0;i<nums.size();i++){
            stt.insert(nums[i]);
       }
       return nums.size()!=stt.size();
    }
};
