#include <iostream>
#include <vector>
using namespace std;

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;

        int temp = y;
        int num = y;
        vector<int> vec;
        bool result = true;

        while (num > 0) {
            int digit = num % 10;
            num /= 10;

            for (int j = 0; j < vec.size(); j++) {
                if (digit == vec[j]) {
                    result = false;
                    break;
                }
            }

            if (!result)
                break;

            vec.push_back(digit);
        }

        if (result) {
            cout << temp << endl;
            break;
        }
    }

    return 0;
}