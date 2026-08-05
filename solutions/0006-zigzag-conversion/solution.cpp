class Solution {
public:
    string convert(string s, int numRows) {
      if(numRows==1  || numRows>s.size()){
        return s;
      }  
      vector<string> rows(numRows);
      int currow=0;
      int direction=1;
      for(char c:s){
        rows[currow]+=c;
        if(currow==0){
            direction=1;
        }
        else if(currow==(numRows)-1){
            direction=-1;
        }
        currow+=direction;
      }
      string res;
      for(const string& row:rows){
        res+=row;
      }
      return res;
    }
};
