#include <bits/stdc++.h>
using namespace std;
int main() {
    string xz;
    string hx;
    cin >> xz;
    cin >> hx;
    long long hx_num = 1, xz_num = 1;
    for (int i = 0; i < xz.length(); i++) {
        xz[i] = xz[i] - 'A' + 1;
        xz_num *= xz[i];
        xz_num %= 47;
    }
    for (int i = 0; i < hx.length(); i++) {
        hx[i] = hx[i] - 'A' + 1;
        hx_num *= hx[i];
        hx_num %= 47;
    }
    if (hx_num == xz_num) {
        cout << "GO";
    } else {
        cout << "STAY";
    }
    return 0;
}