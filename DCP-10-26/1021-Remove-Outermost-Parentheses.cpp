class Solution {
public:
    string removeOuterParentheses(string s) {
        int bal =0 ;

        string res ="";
        for (char c:s){
            if(c == '('){
                if(bal>0){
                    res +=c;
                }
                bal++;
            }else{
                bal--;
                if(bal>0){
                    res += c;
                }
            }
        }
        return res;
    }
};