#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    string win;
    cin >> n;
    cout<< endl;
    cin >> win;
    int count_A =0;
    int count_D =0;


    for(char c:win){
        if(c == 'A'){
            count_A++;
        }else{
            count_D++;
        }
    }
    if(count_A > count_D){
        cout <<"Anton";
    }else if(count_A < count_D){
        cout << "Danik";
    }else{
        cout <<"Friendship";
    }
    return 0;
}