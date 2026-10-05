#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int count = 0;
        if (a == 1) count++;
        if (b == 1) count++;
        if (c == 1) count++;

        if (count >= 2) ans++;
    }

    cout << ans << endl;
    return 0;
}