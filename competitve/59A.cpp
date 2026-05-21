#include<bits/stdc++.h>
#include<cctype>

using namespace std;

int main(){
    string word;
    cin >>word;

    int upper_count =0 ;
    int lower_count =0 ;

    for(char c: word){
        if(isupper(c)){
            upper_count++;
        }else{
            lower_count++;
        }
    }

    if(upper_count > lower_count){
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }else{
       transform(word.begin(), word.end(), word.begin(), ::tolower); 
    }
    cout << word;
}