#include<iostream>

using namespace std;

int main (){
    int  n , h ;
    
    cin >>n >> h;
    int totalwidth =0;
    for(int i=0; i< n ;i++){
        int height;
        cin >> height;
        if(height > h){
            totalwidth += 2;
        }else{
            totalwidth += 1;
        }
    }
    cout << totalwidth;
    return 0;
}