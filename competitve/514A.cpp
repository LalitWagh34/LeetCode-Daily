#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
    string n;
    cin>>n;

    for(int i=0 ;i<n.size();i++){
        int d = n[i] - '0';

        if(i==0 && d== 9)continue;
  

        n[i] = char('0' + min(d,9-d));

        
    }
    cout<<n<<'\n';
    return 0;
}