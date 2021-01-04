#include <iostream>
#define SWAP(x, y, t) (t = x, x = y, y = t)
using namespace std;

void selection_sort(int* arr, int n);

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int N;
    int* arr;
    
    cin >> N;
    arr = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    selection_sort(arr, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\n";
    }
}

void selection_sort(int* arr, int n) {
    int min, tmp;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        SWAP(arr[i], arr[min], tmp);
    }
}
