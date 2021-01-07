#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll S;
    cin >> S;
    
    ll n = 1;
    ll sum;
    while (1) {
        sum = (n * (n + 1)) / 2;
        if ( sum == S) {
            break;
        }
        else if (sum > S) {
            n--;
            break;
        }
        n++;
    }
    cout << n;
}
