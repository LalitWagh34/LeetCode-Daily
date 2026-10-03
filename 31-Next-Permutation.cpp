class Solution {
public:
    void nextPermutation(vector<int>& arr) {

        int idx =-1;
        for(int i= arr.size()-1;i> 0 ;i-- ){
            if(arr[i] > arr[i-1]){

                idx = i-1;
                break;
            }
        }

        if(idx !=-1){

            int j = arr.size()-1;

            while(arr[j] <= arr[idx]){
                j--;
            }
            swap(arr[j] , arr[idx]);
        }
        reverse(arr.begin() +idx +1 ,arr.end());
    }
};