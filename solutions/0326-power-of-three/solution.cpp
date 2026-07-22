class Solution {
public:
    bool isPowerOfThree(int n) {
        int a=pow(3,19);
        if(n>0 && a%n==0){
            return true;
        }
        return false;
    }
};
