// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& arr, int k) {
        int left  = 1;
        int right = *max_element(arr.begin(), arr.end());

        while(left < right){
            int mid = (left + right)/2;
            int sum = 0 ;
            for(int num:arr){
                sum+= (num + mid-1) / mid;
            }
            if(sum<= k){
                right =mid; 
            }else{
                left = mid+1;
            }
        }
        return left ;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {1,2,5,9};
    int k = 6;

    cout << "Smallest Divisor: " << sol.smallestDivisor(arr, k) << endl;

    return 0;
}