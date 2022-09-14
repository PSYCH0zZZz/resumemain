#include <iostream>
#include<math.h>
int main() {
    int r;
    double d=0;
    std :: cout << "radius" << '\n';
    std :: cin >> r;

    int n;
    std :: cout << "number" << '\n';
    std :: cin >> n;
    double k=100;
    int i, i1=0, j, b;
    int j1=0;
    for (b=1;b<=n;++b) {
        std :: cout << "coordinates for (i)" << b << '\n';
        std :: cin >> i;
        std :: cout << "coordinates for (j)" << b << '\n';
        std :: cin >> j;
        d=sqrt(i*i+j*j)-r;
            if (k>d and d>0) {
                k = d;
                i1 = i;
                j1 = j;
            }

    }
    std :: cout << i1 << " " << j1 << " - result";
    return 0;
}
