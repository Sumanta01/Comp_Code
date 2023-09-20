#include <bits/stdc++.h>
using namespace std;

void generateSeries(int n, int m) {
    int series[m];

    for (int i = 0; i < n; i++) {
        series[i] = 1;  // Initialize the first n elements with 1
        cout << series[i] << " ";
    }

    for (int i = n; i < m; i++) {
        series[i] = 0;
        for (int j = i - 1; j >= i - n; j--) {
            series[i] += series[j];
        }
        cout << series[i] << " ";
    }

    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    generateSeries(n, m);

    return 0;
}
