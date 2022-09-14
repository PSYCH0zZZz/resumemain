#include <iostream>

int main() {
    int f, i, n, a, b;
    int f1=0;
    int f2=1;
    std :: cin >> a;
    n=a+1;
    b=0;
    for (i=1; i<n; ++i){
        f=f1+f2;
        f2=f1;
        f1=f;
        if(f==a) {
            std::cout << f << "is a fibbonachi nubmber";
            ++b;
            break;
        }
    }
      if (b==0){
        std :: cout << a <<"is not a fibbonachi number";
    }

    return 0;
}
