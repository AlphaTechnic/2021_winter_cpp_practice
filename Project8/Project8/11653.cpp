#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ll N;
	cin >> N;

	for (int i = 2; i * i <= N; i++) {
		while (N % i == 0) {
			cout << i << '\n';
			N = N / i;
		}
	}
	if (N != 1) {
		cout << N;
	}
}