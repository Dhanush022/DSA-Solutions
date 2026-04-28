class Solution {
public:
    int strStr(string haystack, string needle) {
        int hlength=haystack.size();
        int nlength=needle.size();
        for(int i=0;i<=hlength-nlength;i++){
            int j=0;
            while(j<nlength && haystack[i+j]==needle[j]){
                j++;
                if(j == nlength){
                    return i;
                }
                }
        }
            return -1;
    }
};
