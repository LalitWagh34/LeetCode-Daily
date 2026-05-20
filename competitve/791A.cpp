#include<iostream>

using namespace std;

int main (){
    int limak_age;
    int bob_age;
    cin>> limak_age >> bob_age;
    
    int years= 0;

    while(limak_age <= bob_age){
        limak_age = limak_age*3;
        bob_age = bob_age*2;
        years++;
    }
    cout <<years;
    return 0;
}