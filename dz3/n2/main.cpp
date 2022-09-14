#include <iostream>

const int n = 30;

void finderM(double *arr, size_t n){
    double min, max;
    for(int i = 0; i < n; ++i){
        if(arr[i] < min && i % 2 == 1){
            min = arr[i];
        }
        else{
            if(arr[i] > max && i % 2 == 1){
                max = arr[i];
            }
        }
    }
    std::cout << "Minimom is " << min << '\n';
    std::cout << "Maximum is " << max << '\n';
}

int main() {
    double arr[n];
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
    finderM(arr, n);
    return 0;
}
