#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main (){
    vector<vector<int>>a(3 ,vector<int>(6));

    for(int i=0 ;i<3 ;i++){
        for(int j=0 ; j<6 ;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>>cnt(3 ,vector<int>(7 ,0));
     for(int i=0 ;i<3 ;i++){
        for(int j=0 ; j<6 ;j++){
            cnt[i][a[i][j]]++;
        }
    }

    vector<int> p ={4,5,6};
    double ans =0;
    sort(p.begin(),p.end());
    do{
        double prob =1.0;
        for(int i=0 ;i<3 ;i++){
            prob *= (cnt[i][p[i]]/6.0);
        }
        ans += prob;
    }while(next_permutation(p.begin() , p.end()));
    cout <<fixed <<setprecision(10)<< ans;
    return 0;
}
