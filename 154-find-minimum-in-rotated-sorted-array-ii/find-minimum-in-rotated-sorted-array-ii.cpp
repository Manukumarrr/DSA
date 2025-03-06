class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;

        int ans = nums[0];
        while(low <= high){
            int mid = low + (high- low)/2;

            if(nums[mid] == nums[low] && nums[mid] == nums[high]){
                ans = min(ans, nums[mid]);
                low ++;
                high--;
            }

            else if(nums[mid] >= nums[low]){
                // left half is sorted

                ans = min(ans, nums[low]);
                // we got the minimum from left half, now check right half

                low = mid + 1;
            }
            else{
                // right half is sorted
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};