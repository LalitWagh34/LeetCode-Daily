// https://leetcode.com/problems/next-greater-element-ii/submissions/2002648730/

#include<bits/stdc++.h>
#include<stack>
#include<string>
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n ,-1);
        stack<int>st;
        for(int i= 2*n-1 ; i>= 0 ;i--){
            int index = i%n ;
            int curr = nums[index];

            while(!st.empty() && st.top() <= curr){
                st.pop();
            }
            if(i<n){
                if(st.empty()){
                    res[i] = -1;
                }else{
                    res[i] = st.top();
                }
            }
            st.push(curr);
        }
        return res;
    }
};