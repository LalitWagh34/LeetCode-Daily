class Solution {
public:

    void func(int openCount , int closeCount , vector<string>&ans , string res , int n){
        if(openCount + closeCount == n*2){
            ans.push_back(res);
            return ;
        }

        if(openCount<n ){
            res.push_back('(');
            func(openCount+1 , closeCount , ans, res, n);
            res.pop_back();
        }
        if(closeCount < openCount){
            res.push_back(')');
            func(openCount , closeCount+1 , ans, res, n);
            res.pop_back();

        }

    }
    vector<string>generateParenthesis(int n){
        vector<string>ans ;

        func(0 , 0 ,ans ,"" ,n);
        return ans;
    }
};