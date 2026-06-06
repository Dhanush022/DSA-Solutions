class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> alpha(26,0);
        int left=0,right=0,maxocc=0,ans=0;

        for(right;right<s.length();right++){
            maxocc=max(maxocc,++alpha[s[right]-'A']);
            if(right-left+1-maxocc >k){
                alpha[s[left]-'A']--;
                left++;
                
            }
            ans=max(ans,right-left+1);
            
        }
        return ans;
    }
};
