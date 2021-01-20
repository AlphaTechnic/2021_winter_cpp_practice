#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <climits>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll N;
    int min_val = INT_MAX;
    int max_val = -INT_MAX;

    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << *min_element(arr.begin(), arr.end()) << ' ' << *max_element(arr.begin(), arr.end()) << '\n';
}
