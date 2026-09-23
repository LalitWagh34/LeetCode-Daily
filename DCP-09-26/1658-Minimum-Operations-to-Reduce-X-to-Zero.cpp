class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n =nums.size();
        int i = 0;
        int j=0;
        int count = 0;

        int s = accumulate(nums.begin() , nums.end() ,0);
        int t=0,l=0;
        if(s<x) return -1;
        if(s == x) return n;
        while(j< n){
            t+= nums[j];

            while(t > (s-x) && i<=j){
                t-= nums[i];
                i++;
            }
            if(t == (s-x)){
                l = max(l , j-i+1);

            }
            j++;

        }
        return (l == 0 ? -1 : n-l);
    }
};