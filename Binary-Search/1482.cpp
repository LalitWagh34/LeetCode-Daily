// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/


#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int bloomDayCheck(vector<int>& bloomDay, int currDay,int m , int k){
        int bouquets=0;
        int cnt =0;
        for(int i=0 ;i<bloomDay.size() ;i++){
            if(bloomDay[i] <= currDay ){
                cnt++;
                if(cnt == k){
                    bouquets++;
                    cnt =0;
                }
            }else{
                cnt =0;
            }
        }
        return bouquets;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m * k > bloomDay.size())
            return -1;


        int low = *min_element(bloomDay.begin() ,bloomDay.end());
        int high = *max_element(bloomDay.begin() ,bloomDay.end());
        int ans =-1;
        
        while(low<=high){
            int mid = (low +high)/2;
            int bouquets  =bloomDayCheck(bloomDay,  mid,  m ,  k);
           
            if(bouquets >= m ){
                ans = mid;
                high = mid - 1;
               
            }else{
                low = mid+1;

            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> arr = {1,10,3,10,2};
    int m =3;
    int k = 1;

    cout << "Kth missing positive: " << sol.minDays(arr,m, k) << endl;

    return 0;
}