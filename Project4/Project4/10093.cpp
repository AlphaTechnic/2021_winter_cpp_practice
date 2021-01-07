#include <iostream>

using namespace std;
using ll = long long;

void swap(ll* a, ll* b);
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll a, b;
    cin >> a >> b;

    if (a == b || abs(a - b) == 1) {
        cout << 0;
        return 0;
    }


    if (a > b) {
        swap(&a, &b);
    }

    ll cnt = b - a - 1;
    cout << cnt << "\n";
    for (ll i = a + 1; i < b; i++) {
        cout << i << " ";
    }
}

void swap(ll* a, ll* b) {
    ll tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

