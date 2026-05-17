// https://leetcode.com/problems/trapping-rain-water/description/
#include<bits/stdc++.h>
#include<stack>
#include<string>

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;

        int maxleft = 0;
        int maxRight = 0;
        int trapwater = 0;

        while(left <= right){
            if(height[left] <= height[right]){
                if(height[left] >= maxleft){
                    maxleft = height[left];
                }else{
                    trapwater += maxleft -height[left];
                }
                left++;
            }else{
                if(height[right] >= maxRight){
                    maxRight = height[right];
                }else{
                    trapwater += maxRight - height[right];
                }
                right--;
            }
        }
        return trapwater;
    }
};