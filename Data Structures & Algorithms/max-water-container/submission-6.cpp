class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = 0;
        for( int i = 0 ;i<heights.size()-1;i++){
            for( int j = i+1;j<heights.size();j++){
                int area = min(heights[i], heights[j]) * (j-i);
                maxi= max(maxi,area);
            }
        }
        return maxi;
    }
};
