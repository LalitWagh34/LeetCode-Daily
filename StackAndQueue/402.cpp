// https://leetcode.com/problems/remove-k-digits/

#include<bits/stdc++.h>
#include<stack>
#include<string>



class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;

        for(char digit:num){
            while(!st.empty() && k>0 && st.top() >digit){
                st.pop();
                k--;
            }
            st.push(digit);
        }
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        string res = "";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin() , res.end());

        int startIndex =0;
        while(startIndex < res.size() && res[startIndex] == '0'){
            startIndex++;
        }
        res = res.substr(startIndex);
        return res.empty() ? "0" : res; 
    }
};