class Solution {
public:
    // int max(int a, int b){
    //     if(a>)
    // }
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int area=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){           
                    area = max(area, min(heights[i], heights[j])*(j-i));                
            }
        }
        return area;
    }
};
