class Solution {
public:
    int countpairs(vector<int>&arr , int k) {
        int maxSum =0 ;
        int partition = 1;
        for(int n:arr){
            if(maxSum + n <= k){
                maxSum += n ; 
            }else{
                partition ++;
                maxSum = n;
            }
        }
        return partition;
    }
    int splitArray(vector<int>& arr, int k) {
        int small = *max_element(arr.begin() , arr.end());
        int large = accumulate(arr.begin() ,arr.end() ,0);

        while(small <= large){
            int mid = (small +large )/2;

            int partitions = countpairs(arr ,mid);

            if(partitions > k){
                small = mid+1;
            }else{
                large = mid-1;
            }
        }

        return small;
    }
};