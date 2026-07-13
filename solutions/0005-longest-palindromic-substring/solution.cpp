class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==0){
            return "";
        }
        int left=0;
        int right=0;
        for(int i=0;i<s.size();i++){
            int len1=ispalin(s,i,i);
            int len2= ispalin(s,i,i+1);
            int len=max(len1,len2);
            if(len>right-left){
                left=i-(len-1)/2;
                right=i+len/2;
            }
        }
        return s.substr(left,right-left+1);
    }
    int ispalin(const string& s,int left,int right){
        while(left>=0 && right<s.size() &&  s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
};

