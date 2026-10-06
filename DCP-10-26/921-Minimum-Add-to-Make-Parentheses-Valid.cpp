class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0 ;
        stack<int>st;
        int newCount =0;
        for(char c:s){
            if(c == '('){
                count ++;
            }else{
                if(count > 0){
                    count--;
                }else{
                    newCount++;
                }
            }
        }
        return count + newCount;
    }
};