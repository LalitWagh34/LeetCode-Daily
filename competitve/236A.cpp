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
    set<char> st(res.begin(), res.end());

    if(st.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

}