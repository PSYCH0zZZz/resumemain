#include <iostream>

int main(){
    int i;
    int x;
    std :: cin >> x;
    for(i=2;i<x;i++){
        if(x%i==0){
            std :: cout << i << "*";
            x=x/i;
            i--;
        }
    }
    std :: cout << "*"<< x;
}