class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for ( auto c : s ){
            if(isalnum(c)){
                c = tolower(c);
                str += c;
            }
        }
        string str2 = str;
        reverse(str.begin(), str.end());
        return str == str2;
    }
};
