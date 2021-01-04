#include <iostream>
using namespace std;

bool is_leapyear(int num);

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int num;
	cin >> num;
	cout << is_leapyear(num);
}

bool is_leapyear(int num) {
	if (num % 4 == 0) {
		if (num % 100 == 0) {
			if (num % 400 == 0) {
				return true;
			}
			else return false;
		}
		else return true;
	}
	else return false;
}