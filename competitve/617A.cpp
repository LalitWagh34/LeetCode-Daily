#include<iostream>

using namespace std;

int main (){
    int frds_house ;
    cin >>frds_house ;

    int rem = frds_house%5 ;
    int steps =0;
    if(rem == 0){
        steps = frds_house /5;
    }else{
        steps =frds_house/5 + 1;
    }
    cout << steps;
}