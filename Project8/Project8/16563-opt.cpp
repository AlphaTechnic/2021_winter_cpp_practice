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

	// �� �ڿ������� ���� ���� ���μ��� ���Բ� ��.
	for (ll i = 1; i <= N; i++) prime[i] = i; 
	
	for (ll i = 2; i <= N; i++) {
		if (prime[i] == i) { //���� �ɷ����� �ʾҴٴ� �ǹ� == i�� �Ҽ� 
			for (ll j = 2; j*i <= N; j++) { 
				if (prime[i*j] == i*j) prime[i*j] = i; 
			} 
		} 
	} 

	// ���� ����� Ȱ���ϸ�, �־��� �ڿ����� ���� ��ٷ� ���μ��� ���� �����ϴ�.
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