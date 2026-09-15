#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cin >> year;

    bool leap=(year%400==0||year%4==0&&year%100!=0);
    cout<<(leap?"yes\n":"No\n");

    return 0;
}