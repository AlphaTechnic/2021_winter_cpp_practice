#include <iostream>
using namespace std;

bool palin(string str, int l, int r);

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string str;
    int len;
    
    cin >> str;
    len = str.length();
    cout << palin(str, 0, len-1) << "\n";
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