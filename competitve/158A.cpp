#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int target_score = scores[k - 1];
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (scores[i] >= target_score && scores[i] > 0) {
            count++;
        } else {
            break; 
        }
    }
    
    cout << count << endl;
    return 0;
}


