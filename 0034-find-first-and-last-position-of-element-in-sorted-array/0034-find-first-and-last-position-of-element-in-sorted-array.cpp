class Solution {
public:
    int first_id(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int ans = -1;
        while (low <= high){
            int mid = low + (high - low) /2;
            if (nums[mid]== target){
                ans = mid;
                high = mid -1 ;
            }
            else if (nums[mid] < target) {
                low = mid +1 ;
            }
            else high = mid -1 ;
        }
        if (ans == -1 ) return -1;
        return ans ;   
    }
    int second_id(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0 ;
        int high = n-1;
        int ans = -1;
        while (low <= high){
            int mid = low + (high - low) /2;
            if (nums[mid] == target){
                ans=mid;
                low = mid+1;
            }
            else if (nums[mid] > target) {
                high =mid -1 ;
            }
            else low = mid + 1;
        }
        if (ans == -1 ) return -1 ;
        return ans ;
            
    }
    vector<int> searchRange(vector<int>& nums, int target) {
            int id1= first_id(nums,target);
            int id2 = second_id(nums,target);
            return {id1,id2};
    }
};