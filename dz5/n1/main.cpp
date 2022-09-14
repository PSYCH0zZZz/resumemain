#include <iostream>

int main() {
    uint32_t n;
    std::cin >> n;
    int *p = new int[n];
    for(int i = 0; i < n; ++i){
      std::cin >> p[i];
    }
    int k;
    int mid = 0;
    int left = 0;
    int right = n-1;
    std::cin >> k;
    while(k != mid) {
        if ((left + right) % 2 == 0) {
            mid = (left + right) / 2;
        } else{
            mid = (left + right + 1) / 2;
        }
        if (p[mid] > k) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }

    }
    for(int i = 0; i < n; ++i){
        if(p[i] == mid){
            std::cout << "p[" << i << "]";
            break;
        }
    }
    delete[] p;
    return 0;
}
