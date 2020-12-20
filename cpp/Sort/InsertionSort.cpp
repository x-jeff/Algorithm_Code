#include <iostream>

using namespace std;

void insertion_sort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        int key = arr[i];
        int j = i - 1;
        while ((j >= 0) && (key < arr[j])) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {61, 17, 29, 22, 34, 60, 72, 21, 50, 1, 62};
    insertion_sort(arr, 11);
    for (auto i:arr) {
        cout << i << " ";
    }
    cout << endl;
}