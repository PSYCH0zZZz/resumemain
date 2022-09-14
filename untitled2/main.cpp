#include <iostream>

int main() {
    int f, i, n;
    int f1=0;
    int f2=1;
    std :: cin >> n;
    for (i=1;i<n; ++i){
        f=f1+f2;
        f2=f1;
        f1=f;
    }
    std :: cout << f;
    return 0;
}
