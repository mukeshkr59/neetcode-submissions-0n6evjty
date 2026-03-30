class Solution {
public:
    queue<int> q;
    string encode(vector<string>& strs) {
        string s = "+";
        for( auto str : strs){
            q.push(str.size()); 
            s = s + str + "+";
        }
        return s;
        
    }

    vector<string> decode(string s) {
        vector<string> strs1;
        int n=s.size();
        string str = "";
        int cnt = 0;
        for(int i=1;i<n;i++){
            
            if(s[i] == '+' && !q.empty() &&  cnt== q.front()){
                strs1.push_back(str);
                str = "";
                cnt = 0;
                q.pop();
            } else{
                str.push_back(s[i]); 
                cnt++;  
            }
        }
        return strs1;
    }
};
