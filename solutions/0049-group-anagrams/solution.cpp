class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> ans;
        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            ans[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto entry : ans) {
            result.push_back(entry.second);
        }
        return result;       
        } 
};
// Sorting Approach: Anagrams become exactly the same string when sorted (e.g., "eat" -> "aet").
// Sort each string and use it as the Hash Map key. Append the original string to its list.
// Loop through the map values to return the grouped anagrams.
// TC: O(N * K log K) [N = number of strings, K = max length of a string]. SC: O(N * K)

