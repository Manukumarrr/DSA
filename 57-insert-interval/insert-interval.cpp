class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
           vector<vector<int>> nums;
        int n = intervals.size();
        
        if (n == 1) return intervals; 

        
        sort(intervals.begin(), intervals.end());

        
        nums.push_back(intervals[0]); 
                for (int i = 1; i < n; i++) {
            vector<int>& last = nums.back(); 

            if (last[1] >= intervals[i][0]) { 
                last[1] = max(last[1], intervals[i][1]); 
            } else {
                nums.push_back(intervals[i]); 
            }
        }

        return nums;
    }
};