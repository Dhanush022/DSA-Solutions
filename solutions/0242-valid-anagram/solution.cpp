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
