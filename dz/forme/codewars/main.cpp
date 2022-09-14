#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> multiplication_table(int n) {
    vector<vector<int>> result(n, vector<int>());
    for (int i = 0; i < n ; i ++) {
        result[i].resize(n);
        for (int j = 0; j < n ; j ++) result[i][j] = (i + 1) * (j + 1);
    }
    return result;
}

int main() {
    multiplication_table(5);

    return 0;
}
