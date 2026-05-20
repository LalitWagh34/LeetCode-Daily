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

   if(!res.empty()){
    res[0] = toupper(res[0]);
   }
   cout <<res;
}