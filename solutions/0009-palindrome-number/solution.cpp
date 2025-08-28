class Solution {
public:
    bool isPalindrome(int x) {
        long ld=0,rev=0,rev1=x;
        if(x<0){
            return false;
        }
        while(x!=0)
        {
            ld=x%10;
            x=x/10;
            rev=rev*10+ld;
        }
        if(rev1==rev){
            return true;
        }
        return false;
    }
};
