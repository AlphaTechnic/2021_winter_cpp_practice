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
	for (ll i = 0; i < N; i++) {
		int n;
		ll score;
		vector<ll> vec;
		cin >> n;
		for (ll i = 0; i < n; i++) {
			cin >> score;
			vec.push_back(score);
		}

		double avg = 0;
		double sum = 0;
		double ans;

		for (ll i = 0; i < n; i++) {
			sum += vec[i];
		}
		cout << fixed;                 //소수점 자릿수 고정
		cout.precision(3);

		avg = sum / n;
		//	cout << avg;

		ll cnt = 0;
		for (ll i = 0; i < n; i++) {
			if (vec[i] > avg) {
				cnt++;
			}
		}

		ans = (double)cnt / n;
		cout << ans * 100 << "%" << "\n";
	}

}