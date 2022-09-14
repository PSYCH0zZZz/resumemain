#include <iostream>

void finder(int a[], int n)
{
    int max = a[0], min = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    int *c = new int[max + 1 - min];
    for (int i = 0; i < max + 1 - min; ++i) {
        c[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        c[a[i] - min] = c[a[i] - min] + 1;
    }
    int i = 0;
    for (int j = min; j < max + 1; ++j) {
        while (c[j-min] != 0) {
            a[i] = j;
            --c[j-min];
            ++i;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    finder(a, n);
    for(int i = 0; i < n; ++i){
        std::cout << a[i] << " ";
    }

    return 0;
}
