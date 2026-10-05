#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>& vec) {
    size_t n = vec.size();

    for (size_t i = 0; i < n - 1; ++i) {
        bool swapped = false;

        for (size_t j = 0; j + 1 < n - i; ++j) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> vec;
    int temp;

    cout << "Enter numbers to sort (Enter a non-integer to stop): ";
    while (cin >> temp) {
        vec.push_back(temp);
    }


    bubble_sort(vec);

    cout << "Sorted array: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}