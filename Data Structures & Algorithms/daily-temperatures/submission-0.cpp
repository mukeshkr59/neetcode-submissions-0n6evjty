class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0) ;
        for( int i = 0;i<n-1;i++){
            int cnt = 1;
            for( int j = i+1 ;j<n;j++){
                if(temperatures[j]>temperatures[i]){
                    ans[i] = cnt;
                    break;
                }else{
                    cnt++;
                }
            }
        }
        return ans;
    }
};
