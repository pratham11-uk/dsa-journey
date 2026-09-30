class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int low = 0 ;
        int high = 0 ;
        int ans = 0;
        vector <int> map (256,0);
        while (high < n){
            if (map[s[high]] != 0){
                while (low <=high && (map[s[high]] != 0)){
                    map[s[low]]--;
                    low++;
                }
            }
            else {
                map[s[high]]++;
                ans = max(ans,high-low+1);
                high++;
            }
        }
        return ans;
    }
};