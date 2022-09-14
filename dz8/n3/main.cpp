#include <vector>
#include <iostream>

long sumTwoSmallestNumbers(std::vector<int> numbers) {
    int min1 = numbers[0];
    int min2 = numbers[1];
    for(int i = 0; i < numbers.size(); ++i){
        if(numbers[i] < min1 && numbers[i] > 0) {
            min1 = numbers[i];
            std::cout << min1 << '\n';
            for (int j = 0; j < numbers.size(); ++j) {
                if (numbers[j] < min2 && numbers[j] > 0 && numbers[j] > min1) {
                    min2 = numbers[j];
                    std::cout << min2 << '\n';
                }
            }
        }
    }

    std::cout << "min1"<< min1 << '\n';
    std::cout << "min2"<< min2 << '\n';
    std::cout << min1 + min2;
    return 0;
};

#include <vector>

std::vector<int> solution(std::vector<int> nums) {
    int k = 0;
    for(int i = 0; i < nums.size()-1; ++i){
        for(int j = 0; j < nums.size() - i -1; ++j){
            if(nums[j] > nums[j + 1]){
                k = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = k;
            }
        }
    }
    for(int i = 0; i < nums.size()-1; ++i){
        std::cout << nums[i];
    }

        return nums;
}

bool isDivisible(int n, int x, int y) {
    if(x * y == n){
        return true;
    }else {
        return false;
    };
};

#include <vector>
using namespace std;
vector<int> quadratic(int a,int b){
    int bb = a + b;
    int cc = a * b;
    return {bb, cc};
}

int main(){
    //solution({5, 6, 7 ,8 ,0, 1, 2, 3, 4});
    //isDivisible(12, 3, 4);
    quadratic(0, 1);
  // sumTwoSmallestNumbers({653108483, 582738352, 46500382, 727547674, 1732300709, 1533163166, 1542352857, 743186492, 720607279, 1241992501, 1013481687, 1066185360, 10792032, 40480648, 1171552646, 1606562233, 492698952, 787130138 });
  return 0;
};