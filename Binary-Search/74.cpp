// https://leetcode.com/problems/search-a-2d-matrix/description/

#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size() ,  
            cols = matrix[0].size(),
            left  =0 ,
            right =cols-1;
       
        while (left < rows && right > -1) {
            int curr = matrix[left][right];
            if (curr == target) {
                return true;
            }
            if (curr < target) {
                left ++;
            } else {
                right--;
            }
        }
        return false;
    }
};


int main() {
    Solution sol;

    vector<vector<int>> arr = {{1,3,5,7} ,{10,11,16,20}};
    int target =3;


    cout << "Kth missing positive: " << sol.searchMatrix(arr,target) << endl;

    return 0;
}