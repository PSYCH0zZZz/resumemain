#include <iostream>
#include <vector>

class vect{
    double x;
    double y;
    double z;
    std::vector <int> a{5, 5};
public:
    //конструтор
    vect(){
        x = 0;
        y = 0;
        z = 0;
        std::vector<int> s;
        for(int i = 0; i < s.size(); ++i)
            if(i < 3){

            }
    }
    //cеттер
    void setvect(double x1, double y1, double z1){
        x = x1;
        y = y1;
        z = z1;
    }
};



int main() {


    return 0;
}
