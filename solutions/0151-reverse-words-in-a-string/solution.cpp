class Solution {
public:
    string reverseWords(string s) {   
        int n=s.size();
        reverse(s.begin(),s.end());
        int write=0;
        for(int i=0;i<n;i++){
            if(s[i]!= ' '){
                if(write>0){
                    s[write++]=' ';
                }
                int word_start=write;
                while(i<n && s[i]!=' '){
                    s[write++]=s[i++];
                }
                reverse(s.begin()+word_start,s.begin()+write);
            }
        }
        s.resize(write);
        return s;
    }
};
