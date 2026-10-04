#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 1, 2, 3};
    int result = 0;

    for (int value : vec) {
        result=result^ value;
    }

    cout << result <<endl;
    return 0;
}