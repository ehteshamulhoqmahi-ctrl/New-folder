#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int from[1000];
int to[1000];

int selection_sort(vector<int>& vec) {
    int n = vec.size();
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            swap(vec[i], vec[min_index]);

            from[count] = i;          
            to[count] = min_index;    

            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int swaps = selection_sort(vec);

    cout << swaps << endl;

    for (int i = 0; i < swaps; i++) {
        cout << from[i] << " " << to[i] << endl;
    }

    return 0;
}