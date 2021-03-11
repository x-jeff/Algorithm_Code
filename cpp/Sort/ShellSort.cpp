#include <iostream>

template<typename T>
void shell_sort(T array[], int length) {
    int h = 1;
    while (h < length / 3) {
        h = 3 * h + 1;
    }
    while (h >= 1) {
        for (int i = h; i < length; i++) {
            for (int j = i; j >= h && array[j] < array[j - h]; j -= h) {
                std::swap(array[j], array[j - h]);
            }
        }
        h = h / 3;
    }
}

int main() {
    int arr1[] = {8, 9, 1, 7, 2, 3, 5, 4, 6, 0};
    shell_sort(arr1, 10);
    std::cout << "int_arr after sort : ";
    for (auto i : arr1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}