#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int N;
	int a, b;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b;
		cout << "\n";
	}
	return 0;
}