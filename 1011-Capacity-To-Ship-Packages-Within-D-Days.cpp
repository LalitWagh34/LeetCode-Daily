class Solution {
public:
    int capacity(vector<int>&arr ,int mid){
        int maxSum = 0;
        int partition =1;

        for(int n :arr){
            if(maxSum + n <= mid){
                maxSum += n;
            }else{
                partition++;
                maxSum = n;
            }
        }

        return partition;
    }
    int shipWithinDays(vector<int>& arr, int days) {
        int small = *max_element(arr.begin() ,arr.end());
        int large = accumulate(arr.begin() ,arr.end() ,0);

        while(small <= large){
            int mid = (small +large)/2;

            int cap = capacity(arr , mid);

            if(cap > days){
                small = mid+1;
            }else{
                large = mid-1;
            }
        }

        return small;
    }
};