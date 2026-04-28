class Solution {
public:
    bool isHappy(int n) {
        set<int>st;
        int num=n;
        while(num!=1&&(st.find(num)==st.end())){
            st.insert(num);
            int sum=0;
            int digit=0;
            while(num!=0){
                digit=num%10;
                sum+=digit*digit;
                num=num/10;
            }
            num=sum;
        }
        if(num==1){
            return true;
        }
        else{
            return false;
        }
        
    }   
};
