class Solution {
public:
    bool isAnagram(string s, string t) {
        int charcounts[26]={0};
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            charcounts[s[i]-'a']++;
            charcounts[t[i]-'a']--;
        }
        for(int count:charcounts){
            if(count!=0){
                return false;
            }
        }
        return true;
    }
};
// Fast fail if lengths differ. Use a 26-size frequency array to map 'a'-'z'.
// +1 for chars in 's', -1 for chars in 't'. If it perfectly zeroes out, it's an anagram.
// Note: If the interviewer asks about Unicode(all characters), switch the array to a Hash Map.
// TC: O(n) and SC: O(1)

