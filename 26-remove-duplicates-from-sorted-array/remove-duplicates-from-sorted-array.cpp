class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
        return nums.size();
}
};