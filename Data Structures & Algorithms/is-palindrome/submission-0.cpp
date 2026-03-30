class Solution {
public:
    // string reversS(string s){
    //     int left=0, right=s.size()-1;
    //     while(left<=right){
    //         char c=s[left];
    //         s[left]=s[right];
    //         s[right]=c;
    //         left++;
    //         right--;    
    //     } 
    //     return s;
    // }
    bool isPalindrome(string s) {
        // string str;
        string result;
        for (char c : s) {
            if (isalnum(c)) {  
                result += tolower(c);  
            }
        }
        string str=result;
        reverse(result.begin(), result.end());
        return str==result;
    }
};