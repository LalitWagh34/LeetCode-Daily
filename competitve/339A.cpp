#include<string>
#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string res;
    cin >> res;
    vector<char>nums;

    for(int c:res){
        if(c != '+'){
            nums.push_back(c);
        }
    }
    sort(nums.begin() ,nums.end());

    for(int i=0;i<nums.size();i++){
        cout<<nums[i];

        if(i!= nums.size()-1){
            cout << "+";
        }
    }
}