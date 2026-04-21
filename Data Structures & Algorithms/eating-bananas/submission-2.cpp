class Solution {
public:
    int hoursToEat(vector<int>& piles, int k){
        int hr = 0;
        for( auto pile : piles){
            // hr += ceil((float)pile/k);
            hr += (pile + k - 1) / k;
        }
        return hr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = 0;
        for( auto pile : piles ){
            maxi = max(maxi, pile);
        }

        int low = 1;
        int high = maxi;
        int rate = INT_MAX;
        while( low<=high){
            int mid = low + (high - low)/2;
            int hr = hoursToEat(piles, mid);
            if(hr>h){
                low = mid+1;
            }else {
                rate = mid;
                high = mid-1;
            }
        }
        return rate;
    }
};
