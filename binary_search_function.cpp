#include <iostream>
using namespace std;

void binary_search(int target, int arr[], int low, int high) {
    if (low > high) {
        cout << "Not found.";
        return;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        cout << "Found at index " << mid;
    }
    else if (arr[mid] > target) {
        binary_search(target, arr, low, mid - 1);
    }
    else {
        binary_search(target, arr, mid + 1, high);
    }
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target;

    cout << "Enter your targeted number: ";
    cin >> target;

    binary_search(target, arr, 0, 9);
}