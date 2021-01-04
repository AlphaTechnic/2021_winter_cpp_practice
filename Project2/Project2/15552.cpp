#include<iostream>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int N;
    int a, b;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
}
