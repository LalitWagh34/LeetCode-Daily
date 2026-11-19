class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin() ,arr.end());
// 1 2 3 4 100 200 
        int count =0;
        int longest = 1; 
        int lastSmaller = INT_MIN; // 2-31
        int n = arr.size();

        if(arr.size() == 0) return 0;
        for(int i=0;i< n ;i++){
            if(arr[i]-1 == lastSmaller){ // 0 == lastSmaller 
                count++;
                lastSmaller = arr[i];
            }else if(lastSmaller != arr[i]){
                count = 1; 
                lastSmaller = arr[i];
            }

            longest = max(count , longest);
        }

        return longest;
    }
};