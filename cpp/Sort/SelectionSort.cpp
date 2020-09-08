#include <iostream>
#include <vector>

template<typename T>
void selection_sort(std::vector<T> &arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[j] < arr[min])
                min = j;
        std::swap(arr[i], arr[min]);//交换两个变量
    }
}

int main() {
    std::vector<int> vc_int = {4, 7, 9, 2, 1, 11};
    std::vector<float> vc_float = {3.7, 2.8, 9.7, 1.6, 0.9};
    selection_sort(vc_int);
    selection_sort(vc_float);
    std::cout << "vc_int after sort : ";
    for (auto i : vc_int) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "vc_float after sort : ";
    for (auto i : vc_float) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}