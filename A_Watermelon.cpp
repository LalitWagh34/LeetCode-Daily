#include<bits/stdc++.h>
using namespace std;

bool watermelon(int x){
 
   
    for(int i=2 ;i<x;i+=2){
        int sec = x-i;

        if(sec%2 == 0 && i <sec){
            return true;
        }
    }
    return false;
}

int main(){
    int x;
    cin >>x;

    int wat = watermelon(x);

    if(wat){
        cout << "true";
    }else{
        cout << "false";
    }
}