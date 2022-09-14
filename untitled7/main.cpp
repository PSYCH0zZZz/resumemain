#include <iostream>

char charfinder(char a){
/*    if (a=='c'){
        return 0;
    }
    else {*/
        std::cout << a;
    //}
}

void ch(char a){
   while( a != 'c') {
        std::cin >> a;
    }
    charfinder(a);



}



int main() {
    char a;
    ch(a);
    return 0;
}
