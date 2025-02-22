#include<bits/stdc++.h>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> a;
        for (int i=0;i<nums.size();i++)
        {
            a.insert(nums[i]);
            
        }
                
        return a.size()!=nums.size();
    }
};