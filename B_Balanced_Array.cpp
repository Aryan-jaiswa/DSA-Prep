#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 4 != 0) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        int half = n / 2;
        int sumEven = 0, sumOdd = 0;
        for (int i = 1; i <= half; i++) {
            cout << 2 * i << " ";
            sumEven += 2 * i;
        }
        for (int i = 1; i < half; i++) {
            cout << 2 * i - 1 << " ";
            sumOdd += 2 * i - 1;
        }
        cout << sumEven - sumOdd << "\n";
    }
    return 0;
}