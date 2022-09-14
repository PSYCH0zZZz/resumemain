#include <iostream>

int main() {
    int a, k = 0;
    std::cin >> a;
while (a){
    int c=a%10;
    if ((c%2)==0)
        ++k;
    a=a/10;

}
std::cout << k;
    return 0;
}
