#include<iostream>

using namespace std;

int main (){
    int inital_cost ;
    int No_dollars;
    int bananaWants;
    cin >> inital_cost >> No_dollars >> bananaWants ;

    int totalprice =0;
    for(int totalCost=1 ;totalCost<= bananaWants ;totalCost++){
        totalprice += totalCost*inital_cost;
    }
    int remBorrow = totalprice - No_dollars;
    
    if(remBorrow < 0){
        remBorrow =0;
    }
    
    cout <<remBorrow;
}