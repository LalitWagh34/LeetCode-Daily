class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);

        for(char c:s){
            if(c =='('){
                st.push(0);
            }else{
                int c1 = st.top();
                st.pop();
                int c2 = st.top();
                st.pop();
                st.push(c2+ max(2*c1 ,1));
            }
        }
        return st.top();
    }
};