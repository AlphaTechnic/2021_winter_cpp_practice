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

	ll prime[5000001]; 
	ll N = 5000000; 

	// 각 자연수마다 가장 작은 소인수를 갖게끔 함.
	for (ll i = 1; i <= N; i++) prime[i] = i; 
	
	for (ll i = 2; i <= N; i++) {
		if (prime[i] == i) { //아직 걸러지지 않았다는 의미 == i는 소수 
			for (ll j = 2; j*i <= N; j++) { 
				if (prime[i*j] == i*j) prime[i*j] = i; 
			} 
		} 
	} 

	// 위의 결과를 활용하면, 주어진 자연수에 대해 곧바로 소인수에 접근 가능하다.
	for (ll i = 0; i < T; i++) {
		ll k;
		cin >> k;

		while (k > 1) {
			cout << prime[k] << ' ';
			k /= prime[k];
		}
		cout << '\n';
	}
}