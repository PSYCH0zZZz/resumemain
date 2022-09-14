#include <iostream>

const size_t n = 10000;

void input(char *a, size_t n, int n2){
    int i;
    while(a[i] != '8'){
        std::cin >> a[i];
        i++;
        n2 += 1;
    }
}


void finder(char *a, size_t n, int n2){
    char b[n];
    char c[n];
    if (n2 % 2 == 0){
        for(int i = 0; i < n2/2; ++i){
            b[i] += a[i];
        }
        for(int i = n2 - 1; i > n2/2 - 1; --i){
            c[i] += a[i];
        }
    } else{
        // для нечетных чисел
        for(int i = 0; i < n2/2 + 1; ++i){
            b[i] += a[i];
        }
        for(int i = n2; i > n2/2; --i){
            c[i] += a[i];
        }
    }
    // конец поиска массивов для нечетных чисел
    int k = 0;
    if (n2 % 2 == 0) {
        for (int j = 0; j < n2 / 2; ++j) {
            if (b[j] != c[n2 - j - 1]) {
                ++k;
            }
        }
        if (k != 0) {
            std::cout << "the number is not a polindrom";
        } else {
            std::cout << "the number is a polindrom";
        }
    } else {
        for (int j = 0; j < n2 / 2; ++j) {
            if (b[j] != c[n2 - j - 1]) {
                ++k;
            }
        }
        if (k != 0) {
            std::cout << "the number is not a polindrom";
        } else {
            std::cout << "the number is a polindrom";
        }

    }
}

int main() {
    int n2;
    char a[n];
    std::cin >> n2;
    input(a, n, n2);
    finder(a, n, n2);
    return 0;
}
