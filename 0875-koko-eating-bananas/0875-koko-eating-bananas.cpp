class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = 0;
        for ( int p : piles){
            high = max (p , high);
        }
        int ans = high ;
        while (low <= high){
            int mid = low + (high - low) /2 ;
            long long hours= 0;
            for (auto it : piles){
                if (it <= mid) hours++;
                else if (it % mid == 0) hours += it/mid;
                else hours += it/mid +1;
            }
            if (hours <= h){
                ans = min (ans , mid);
                high = mid -1 ;
            }
            else {
                low = mid +1;
            }
        }
        return ans;
    }
};