#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the minimum element with the current element
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    std::cout << "Original Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    selectionSort(arr);

    std::cout << "\nSorted Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
