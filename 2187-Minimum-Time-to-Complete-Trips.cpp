class Solution {
public:
    long long int check(vector<int>& arr ,long long mid){
        long long int totalTrip = 0;

        for(int x:arr){
            //long long int val = x;
            totalTrip += (mid / x);
        }

        return totalTrip;
    }
    long long minimumTime(vector<int>& arr, int totalTrips) {
        long long lowest = 1;
        long long highest =(long long)*min_element(arr.begin(), arr.end()) * totalTrips;

        while(lowest < highest){
            long long mid = lowest + (highest-lowest)/2;

            if(check(arr , mid) >= totalTrips){
                highest = mid; 
            }else{
                lowest = mid+1;
            }
        }

        return lowest;
    }
};