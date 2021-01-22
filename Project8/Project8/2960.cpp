#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N, K;
	cin >> N >> K;
	
	vector<int> chk;
	chk.resize(1000);
	int cnt = 0;

	int j;
	for (int i = 2; i <= N; i++) {
		for (j = i; j <= N; j += i) {
			if (chk[j] == 0) {
				chk[j] = 1;
				cnt++;
			}
			if (cnt == K) {
				cout << j;
				return 0;
			}
		}
	}
}