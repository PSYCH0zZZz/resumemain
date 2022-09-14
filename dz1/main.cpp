#include <iostream>
#include <math.h>


double root_finder(double a, double b, double c){
    double k, m;

    if (b*b-4*a*c<0){
        std::cout << "no roots";
    }
    else{
        if (b*b-4*a*c==0){
            std::cout << -b/2*a;
            return 0;
        }
        else{
            k=(sqrt(b*b-4*a*c)-b)/(2*a);
            m=(-sqrt(b*b-4*a*c)-b)/(2*a);
            std::cout << k;
            std::cout << m;
            return 0;
        }
    }
}
int main() {
    double a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    root_finder(a,b,c);
    return 0;
}
