#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	unsigned long long a;
	cin >> a;

	if (a == 18446744073709551615) {
		cout << 64;
		return 0;
	}
	

	while (a >= 0) {
		if (a % 2) {
			break;
		}
		else a /= 2;
	}
	
	cout << log2(a + 1);
}