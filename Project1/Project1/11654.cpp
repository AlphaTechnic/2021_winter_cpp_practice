#include <iostream>
#include <string>
using namespace std;
int main() {
	char ch;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> ch;
	cout << (int)ch;
	return 0;
}