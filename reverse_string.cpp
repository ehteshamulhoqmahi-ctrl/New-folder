#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string rev = str;

    for (int i = 0; i < str.length(); i++) {
        rev[i] = str[str.length() - 1 - i];
    }
    cout << rev;
    return 0;
}