#include <iostream>
#include <array>

void output(int *mass, int n){
    for(int i = 0; i < n; ++i){
        if (mass[i] % 2 == 0){
            std::cout << mass[i] << " the number is prime " << '\n';
        } else {
            std::cout << mass[i] << " the number is not a prime" << '\n';
        }
    }
}

int main() {
    int n;
    int *mass = new int [n];
    std::cin >> n;
    for (int i = 0; i < n; ++i){
        std::cin >> mass[i];
    };
    output(mass, n);
    return 0;
}
