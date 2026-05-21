#include <bits/stdc++.h>

using namespace std;

int main(){
    int number , n ;
    cin>> number >> n;
    
    int last_number =number%10;
    for(int i=1; i<= n ;i++){
        if(last_number != 0){
            number -= 1;
        }else{
            number /=10; 
        }
        last_number =number%10;
    }


    cout << number;
}