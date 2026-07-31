class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> windowSet;
        int left = 0;
        int max_len = 0;
        for (int right = 0; right < s.length(); right++) {
            while (windowSet.find(s[right]) != windowSet.end()) {
                windowSet.erase(s[left]);
                left++;
            }
            windowSet.insert(s[right]);
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};
// Sliding Window with a Hash Set to track unique characters.
// Expand window with `right`. 
// If `s[right]` is already in the set, a duplicate exists.
// Shrink window from the `left` (using a while loop) and erase `s[left]` until the duplicate is gone.
// Insert `s[right]` and update max_len. 
// TC: O(N), SC: O(M) where M is the character set size.
