class Solution { 
    public: bool isSameAfterReversals(int num) { 
        long ld=0,rev=0,rerev=0,id2=0,rev1=num;
        while(num!=0) { 
            ld=num%10; num=num/10; 
            rev=(rev*10)+ld; } 
            if(rev>INT_MAX || rev<INT_MIN)
            { return 0; } 
            while(rev!=0) { 
                id2=rev%10; 
                rev=rev/10; 
                rerev=(rerev*10)+id2; } 
                if(rev1==rerev) 
                { return true; }
                 else { return false; 
                 } 
                 } 
    };
