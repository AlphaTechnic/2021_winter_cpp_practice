#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <climits>

using namespace std;
using ll = long long;

int get_ind(vector<int> arr, int size, int target_num);

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    vector<int> ind(N);

    for (int i = 1; i <= N; i++) {
        arr[i] = i;
    }
    for (int i = 1; i <= M; i++) {
        ind[i] = i;       
    }
    for (int i = M + 1; i <= N; i++) {
        ind[i] = i;
    }

    int index;
    int num;

    do {
        for (int i = 1; i <= M; i++) {
            index = get_ind(ind, N, i);
            num = arr[index];
            cout << num << ' ';
        }
        cout << "\n";
    } while (next_permutation(ind.begin(), ind.end()));
}


int get_ind(vector<int> arr, int size, int target_num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target_num) {
            return i;
        }
    }
    return -1;
}