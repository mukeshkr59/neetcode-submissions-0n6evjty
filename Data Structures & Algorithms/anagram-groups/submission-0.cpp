class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> v;
        int n=strs.size();
        for(int i=0;i<n;i++){
            string sortedS=strs[i];
            sort(sortedS.begin(), sortedS.end());
            v[sortedS].push_back(strs[i]);
        }        
        vector<vector<string>> res;
        for(auto it : v){
            res.push_back(it.second);
        }
        return res;
    }
};
