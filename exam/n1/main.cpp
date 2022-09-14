#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Point{
private:
    int x;
    int y;
    string color;
public:
    Point(){
        x = 1000;
        y = 1000;
        color += "z";
    }
    Point& operator=(const Point& right) {
        if (this == &right) {
            return *this;
        }
        x = right.x;
        y = right.y;
        color = right.color;
        return *this;
    }
    friend std::istream& operator>> (std::istream &in, Point &point);
    friend std::ostream& operator<< (std::ostream &out, const Point &point);
    friend bool operator==(const Point& left, const Point& right);
    friend bool operator> (const Point &left, const Point &right);

};

bool operator> (const Point &left, const Point &right){
    double left_gip = sqrt((double)(left.x*left.x) + (double)(left.y*left.y));
    double right_gip = sqrt((double)(right.x*right.x) + (double)(right.y*right.y));
    if(left_gip > right_gip) return true;
    else{
        if(left_gip == right_gip) {
            if (left.color > right.color) return true;
            else return false;
        } else return false;
    }
}
bool operator==(const Point& left, const Point& right){
    double left_gip = sqrt((double)(left.x*left.x) + (double)(left.y*left.y));
    double right_gip = sqrt((double)(right.x*right.x) + (double)(right.y*right.y));
    if(left_gip == right_gip) return true;
    else{
        return false;
    }
}
std::ostream& operator<< (std::ostream &out, const Point &point)
{
    out << point.x << ' ' << point.y << ' ' << point.color;

    return out;
}

std::istream& operator>> (std::istream &in, Point &point){
    in >> point.x;
    in >> point.y;
    in >> point.color;
    return in;
}
int main() {
    Point main_;
    cin >> main_;

    int num;
    cin >> num;
    Point *arr = new Point[num];
    Point x1;
    int k = 0;
    for(int i = 0; i < num;i++){
        cin >> x1;
        if(main_ > x1){
            arr[k] = x1;
            k++;
        }
    }
    Point temp;
    int size = k;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
