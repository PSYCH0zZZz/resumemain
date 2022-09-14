#include <iostream>

void gg(int *arr, size_t n){
    int k;
    for(int i = 0; i < n; ++i){
        if (arr[i] % 2 == 0){
            k = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = k;
        }
    }
}

int main() {
    int arr[20];
    for(int i = 0; i < 20; ++i){
        arr[i] = i+1;
        std::cout << arr[i] << " ";
    }
    std::cout << " " << '\n';
    gg(arr, 20);
    for(int i = 0; i < 20; ++i){
        std::cout << arr[i] << " ";
    }
    return 0;
}
