class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0 ;
        unordered_map <int,int> mpp;
        mpp[0]=1;
        int sum = 0 ;
        for (auto it : nums){
            sum += it;
            if (mpp.find(sum-k) != mpp.end()) {
                count += mpp[sum - k];
            }
            mpp[sum]++;
        }
        return count;
    }
};