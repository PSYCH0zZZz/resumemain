#include <iostream>

int fibfinder(int n, int f2, int f1){
    int f3 = f2 + f1;

    for(int i = 0; i < n; ++i){
        return fibfinder(n, f2, f1);
    }
}

int main() {
    fibfinder(14, 1, 0);
    return 0;
}
