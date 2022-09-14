#include <iostream>
const int n = 10;
void boubleSort(int *arr, size_t n){
    int k;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
}

void output(int *arr, size_t n){
    for(int i = 0; i < n; ++i){
        std::cout << arr[i] << " ";
    }
}

int main() {
    int arr[n];
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
    boubleSort(arr, n);
    output(arr, n);

    return 0;
}
