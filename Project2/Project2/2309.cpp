#include <iostream>
#define SWAP(x, y, t) (t=x, x=y, y=t)
using namespace std;

int is_A_in_arr(int A, int* arr, int size);
void selection_sort(int* arr, int n);

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int arr[10];
	int result[10];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	int ind1, ind2;
	for (int i = 0; i < 9; i++) {
		ind1 = is_A_in_arr(sum - arr[i] - 100, arr, 9);
		if (ind1 >= 0) {
			if (arr[ind1] != arr[i]) {
				ind2 = i;
				break;
			}
		}
	}

	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		if (i == ind1 || i == ind2) {
			continue;
		}
		else result[cnt++] = arr[i];
	}
	selection_sort(result, 7);

	for (int i = 0; i < 7; i++) {
		cout << result[i] << "\n";
	}
}

int is_A_in_arr(int A, int* arr, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == A) {
			return i;
		}
	}
	return -1;
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
