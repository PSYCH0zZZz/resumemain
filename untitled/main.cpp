#include <iostream>

int main() {
    int a;
    int i;
    int k=0;
    double b;
    std::cin >> a;
    for (i=1;i<a;++i){
        b=a/i;
        if   (a-static_cast<int>(b)==0) {
            ++k;
        }
    }
    std::cout << k;
    return 0;
}
