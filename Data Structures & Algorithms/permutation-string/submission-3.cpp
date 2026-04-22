class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        if( n > s2.size()) return false;
        int j = 0;
        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;
        for( auto c : s1){
            mpp1[c]++;
        }
        for( int i= 0;i<n;i++){
            mpp2[s2[i]]++;
        }
        if( mpp1 == mpp2) return true;
        for( int i = n; i<s2.size();i++){
            mpp2[s2[j]]--;
            if(mpp2[s2[j]] == 0){
                mpp2.erase(s2[j]);
            }
            j++;
            mpp2[s2[i]]++;
            if(mpp1 == mpp2 ){
                return true;
            }
        }
        for( auto it : mpp2){
            cout<<it.first<<" "<<it.second<<endl;
        }
        return false;
    }
};
