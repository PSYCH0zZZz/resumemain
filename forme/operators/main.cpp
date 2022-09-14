#include <iostream>

class Point{
     int *mass[5] = {};
    int n = 5;
public:
    void setter(int *mass_rep[5], int n_rep){
        n = n_rep;
        for(int i = 0; i < 5; ++i){
            mass[i] = mass_rep[i];
        }
    }
    void getter(){
        for(int i = 0; i < 5; ++i){
            std::cout << mass[i] << " ";
        }
    }
};

int main() {
    Point pp;
    int *m = new int[6];
    int *mass1[5] = {0, 0, 0, 0, 0};
    pp.setter(mass1, 5);
    pp.getter();
    return 0;
}
