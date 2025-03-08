class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
    int l = 0, maxLength = 0;

    for (int r = 0; r < s.length(); r++) {
        while (charSet.find(s[r]) != charSet.end()) {
            charSet.erase(s[l]);
            l++;
        }
        charSet.insert(s[r]);
        maxLength = max(maxLength, r - l + 1);
    }

    return maxLength;
    
    }
};