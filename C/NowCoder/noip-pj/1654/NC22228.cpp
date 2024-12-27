#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (cin >> n) {
        int arr[30], count = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == m && !found) {
                found = true;
                continue;
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}