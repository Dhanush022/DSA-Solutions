class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxl=0,left=0;
        unordered_map<char,int> maxlen;
        if(s.length()<1){
            return 0;
        }
        if(s.length()<2){
            return 1;
        }
        for(int right=0;right<s.size();right++){
            char c=s[right];
            maxlen[c]+=1;
            while(maxlen[c]>1){
                char secc=s[left];
                maxlen[secc]-=1;
                left++;
            }
            maxl=max(maxl,right-left+1);
        }
        return maxl;
    }
};
