#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <climits>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int N;
    int num;
    vector<int> A;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        A.push_back(num);
    }
    sort(A.begin(), A.end());

    int M;
    int key;
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> key;
        cout << (int)binary_search(A.begin(), A.end(), key) << ' ';
    }
}
