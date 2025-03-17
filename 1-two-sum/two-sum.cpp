class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
    vector<pair<int, int>> indexedNums;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            indexedNums.push_back({nums[i], i});
        }

        sort(indexedNums.begin(), indexedNums.end());

        int begin = 0, end = n - 1;

        while (begin < end) {
            int sum = indexedNums[begin].first + indexedNums[end].first;
            
            if (sum == target) {
                return {indexedNums[begin].second, indexedNums[end].second};
            } 
            else if (sum < target) {
                begin++;
            } 
            else {
                end--;
            }
        }
        return {};

    }
};