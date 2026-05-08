// https://leetcode.com/problems/kth-missing-positive-number/description/

#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int CountPairs(vector<int>& arr, int k) {
       int subArrays = 0;
       int partition = 1 ;
        for(int num:arr){
            if(subArrays + num <= k){
                subArrays += num; 
            }else{
                partition++;
                subArrays = num ;
            }
        }
        return partition;

    }

    int splitArray(vector<int>&arr , int k){
        int small = *max_element(arr.begin() ,arr.end());
        int large = accumulate(arr.begin() , arr.end() , 0);

        while(small<= large){
            int mid = (small+large)/2;
            int partitions  = CountPairs(arr ,k);
            
            if(partitions > k){
                small = mid+1;
            }else{
                large = mid-1;
            }

        }
        return small;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {1,2,3,4,5};
    int k = 2;

    cout << "Kth missing positive: " << sol.splitArray(arr, k) << endl;

    return 0;
}