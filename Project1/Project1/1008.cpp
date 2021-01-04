#include <iostream>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int a, b;
	cin >> a >> b;
	cout.fixed;
	cout.precision(10);
	cout << (double)a / b;
}