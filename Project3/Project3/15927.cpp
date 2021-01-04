#include <iostream>
using namespace std;

bool palin(string str, int l, int r);

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str;
    int len;

    cin >> str;
    len = str.length();
    if (len == 1) {
        cout << "-1";
        return 0;
    }

    int i;
    int flag;
    for (i = len - 1; i > 0; i--) {
        flag = i;
        for (int j = len - 1; j > 0; j--) {
            if (palin(str, j - i, j) == false) {
                flag = i + 1;
                break;
            }
        }
    }
    cout << flag;
}

bool palin(string str, int l, int r) {
    if (l > r) {
        return true;
    }
    if (str[l] != str[r]) {
        return false;
    }
    return palin(str, l + 1, r - 1);
}