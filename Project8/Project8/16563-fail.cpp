#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ll T;
	cin >> T;
	vector<ll> primes, chk;
	chk.resize(2400);
	primes.resize(500);
	ll ind = 0;
	
	// 에라토스테네스의 체를 이용하여, 소수 배열 얻기
	for (ll i = 2; i*i <= 5000000; i++) {
		if (chk[i] != 0) {
			continue;
		}
		primes[ind++] = i;
		for (ll j = i * i; j*j <= 5000000; j += i) {
			chk[j] = 1;
		}
	}

	// 소수들만을 후보로 돌면서, 소인수 찾기
	for (ll i = 0; i < T; i++) {
		ll num;
		cin >> num;
		
		for (ll j = 0;; j++) {
			if (primes[j] == 0 || (primes[j] * primes[j] > num) || (num == 1)) {
				break;
			}
			while (num % primes[j] == 0) {
				cout << primes[j] << ' ';
				num = num / primes[j];
			}
		}
		if (num != 1) {
			cout << num;
		}
		cout << '\n';
	}
}