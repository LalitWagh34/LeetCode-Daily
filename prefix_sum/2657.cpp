// https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/description/?envType=daily-question&envId=2026-05-20

#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        int n = A.size();

        set<int>st;

        for(int i=0 ;i<n ;i++){
            st.insert(A[i]);
            st.insert(B[i]);

            ans.push_back((i+1) * 2 - st.size());

        }
        return ans;
    }
};