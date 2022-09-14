#include <iostream>

int main() {
    int n = 10;
    int t = 0;
    for(int i = 0; i < n; ++i){
        int c;
        c = i * i;
        while(c != 0){
            if((c % 10) == 1){
                t = t + 1;
                break;
            }else{
                c = c / 10;
            }
        }
    }
    std::cout << t;

return 0;
}
