class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int maxfreq = 0;
        int maxlen = 0;
        vector<int> arr(26, 0);
        while(r<s.size()){
            arr[s[r] - 'A']++;
            maxfreq = max(maxfreq, arr[s[r] - 'A'] );
            while((r-l+1)-maxfreq > k){
                arr[s[l]-'A']--;
                // maxfreq = 0;
                l++;
            }

            if( (r-l+1)-maxfreq <= k ){
                maxlen = max(maxlen, r-l+1);
            }
            cout<<maxlen << " ";
            r++;
        }
        return maxlen;
    }
};
