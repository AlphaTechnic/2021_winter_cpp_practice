#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

vector<bool> chk(31, 0);
int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int num;
    for (int i = 0; i < 28; i++) {
        cin >> num;
        chk[num] = true;
    }
    for (int i = 1; i < 31; i++) {
        if (chk[i] == false) {
            cout << i << "\n";
        }
    }
}

