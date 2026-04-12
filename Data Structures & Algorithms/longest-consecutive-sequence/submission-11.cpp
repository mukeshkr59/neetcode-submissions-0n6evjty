class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        int cnt = 1;
        int maxi = 0;
        for(int i = 0 ; i<nums.size();i++){
            int a = nums[i];
            if( mpp.find(a-1) == mpp.end()){
                while(mpp.find(a+1) != mpp.end() ){
                    cout<< a << " ";
                    cnt++;
                    a++;
                }
                maxi = max( maxi, cnt);
                cnt = 1;
            }
        }
        return maxi;
    }
};
