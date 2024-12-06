#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long result = 0;
        vector<vector<int>> dp_gcd(n, vector<int>(n));
        vector<vector<int>> dp_or(n, vector<int>(n));

        for (int l = 0; l < n; ++l) {
            dp_gcd[l][l] = a[l];
            dp_or[l][l] = a[l];
            result += 1LL * dp_gcd[l][l] * dp_or[l][l];
            for (int r = l + 1; r < n; ++r) {
                dp_gcd[l][r] = gcd(dp_gcd[l][r - 1], a[r]);
                dp_or[l][r] = dp_or[l][r - 1] | a[r];
                result += 1LL * dp_gcd[l][r] * dp_or[l][r];
            }
        }

        cout << result << endl;
    }
    return 0;
}