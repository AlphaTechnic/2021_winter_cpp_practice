#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int N;
	int num;
	vector<int> cards;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		cards.push_back(num);
	}
	sort(cards.begin(), cards.end());

	int M;
	int key;
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> key;
		int upper_idx = upper_bound(cards.begin(), cards.end(), key) - cards.begin();
		int lower_idx = lower_bound(cards.begin(), cards.end(), key) - cards.begin();
		cout << upper_idx - lower_idx << ' ';
	}
}
