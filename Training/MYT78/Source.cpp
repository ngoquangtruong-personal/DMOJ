#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Input.inp", "r", stdin);
    freopen("Output.out", "w", stdout);
    #endif

    int n;
    cin >> n;

    int a[n];
    int moduloCount[3] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        moduloCount[a[i] % 3]++;
    }

    int count = 0;
    count += (moduloCount[0] * (moduloCount[0] - 1)) / 2;
    count += moduloCount[1] * moduloCount[2];

    cout << count;

    return 0;
}