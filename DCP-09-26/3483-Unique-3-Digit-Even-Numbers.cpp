class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int it : digits) {
            freq[it]++;
        }

        int count = 0;

        for (int i = 1; i <= 9; i++) {
            if (freq[i] == 0)
                continue;
            freq[i]--;
            for (int j = 0; j <= 9; j++) {
                if (freq[j] == 0)
                    continue;
                freq[j]--;

                for (int k = 0; k <= 8; k += 2) {

                    if (freq[k] > 0)
                        count++;
                }
                freq[j]++;
            }
            freq[i]++;
        }
        return count;
    }
};


