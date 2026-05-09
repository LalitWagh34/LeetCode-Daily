// https://leetcode.com/problems/product-of-array-except-self/description/

#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>temp(n) ;
        int product=1;
        for(int i=0 ;i<n ;i++){
            temp[i] = product;
            product *=nums[i];            
        }
        int suf = 1;
        for(int i=n-1;i>=0 ;i--){
            temp[i]*=suf;
            suf *= nums[i];
        }
        return temp;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {1,2,3,4};

    cout << "Product of Array Except Self :- " << sol.productExceptSelf(arr) << endl;

    return 0;
}