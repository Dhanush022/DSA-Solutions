class Solution {
public:
    string minWindow(string s, string t) {
        // Base case: if 's' is shorter than 't', it's impossible to contain 't'
        if (s.length() < t.length() || s.length() == 0 || t.length() == 0) {
            return "";
        }

        // Frequency map of characters in 't'
        unordered_map<char, int> mapt;
        for (int i = 0; i < t.length(); i++) {
            mapt[t[i]]++;
        }

        int unique = mapt.size(); // Number of unique characters we need to match
        int l = 0, r = 0, create = 0;
        
        // ans array: {window_length, left_bound, right_bound}
        int ans[3] = {-1, 0, 0}; 
        unordered_map<char, int> submap;

        while (r < s.length()) {
            char c = s[r];
            submap[c]++;

            // If character is in 't' and we have the exact amount needed, we created a match
            if (mapt.count(c) && submap[c] == mapt[c]) {
                create++;
            }

            // Try and contract the window until it ceases to be 'desirable'
            while (l <= r && unique == create) {
                c = s[l];

                // Update the minimum window if this is the first valid window (-1) 
                // OR if it's strictly smaller than our current best window.
                if (ans[0] == -1 || r - l + 1 < ans[0]) {
                    ans[0] = r - l + 1;
                    ans[1] = l;
                    ans[2] = r;
                }

                // The character at the left pointer is no longer a part of the window
                submap[c]--;
                
                // If it was a required character and our count fell below what is needed,
                // the window is no longer valid.
                if (mapt.count(c) && submap[c] < mapt[c]) {
                    create--;
                }
                
                // Move the left pointer ahead to contract
                l++;
            }
            // Move the right pointer ahead to expand
            r++;
        }

        // If ans[0] is still -1, no valid window was found
        if (ans[0] == -1) {
            return "";
        } else {
            // C++ syntax: s.substr(start_index, length)
            return s.substr(ans[1], ans[0]); 
        }
    }
};
