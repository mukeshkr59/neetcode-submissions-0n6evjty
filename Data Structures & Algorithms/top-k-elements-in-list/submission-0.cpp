class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }    
        vector<pair<int, int>> arr;
        for(const auto& p : mpp){
            arr.push_back({p.second, p.first});
        }  
        sort(arr.rbegin(), arr.rend());

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(arr[i].second);
        }     
        return res;
    }
};
