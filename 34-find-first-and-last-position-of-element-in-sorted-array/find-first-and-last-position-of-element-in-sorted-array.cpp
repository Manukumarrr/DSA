class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        unordered_map<int, vector<int>>mp;
        for(int i =0 ;i<nums.size();i++)
        {
           mp[nums[i]].push_back(i);
        }
            if (mp.find(target) == mp.end()) {
        return {-1, -1};
    }

    
    vector<int> positions = mp[target];
    return {positions.front(), positions.back()};
       
       
    }
};