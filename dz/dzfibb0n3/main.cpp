#include <iostream>

int fibfinder(int n) {
    if (n == 0){
        return 0;
    }
        if(n == 1){
            return 1;
        }
        else{
            return fibfinder(n - 1) + fibfinder(n - 2);
        }
}
int main() {
    int n;
    std::cin >> n;
    fibfinder(n);
    return 0;
}
