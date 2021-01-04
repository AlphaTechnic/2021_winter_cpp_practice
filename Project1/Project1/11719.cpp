#include <iostream>
#include <string>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	string st;
	while (getline(cin, st)) {
		cout << st << "\n";
	}
}