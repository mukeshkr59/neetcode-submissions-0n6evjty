class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for( auto num : nums){
            if(mpp.find(num) != mpp.end()){
                return num;
            }
            mpp[num]++;
        }
        return -1;
    }
};
