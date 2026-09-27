class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<char> st;
        string res="",ans="";

        for(int i=0;i<n;i++){
            if(s[i]==')'){
                while(st.top()!='('){
                   res+=st.top();
                   st.pop();
                }
                st.pop();
                int i=0;
                while(i<res.size()){
                    st.push(res[i]);
                    i++;
                }
                res="";
            }
            else{
                st.push(s[i]);
            }
        }

        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        

        

        return ans;
    }
};