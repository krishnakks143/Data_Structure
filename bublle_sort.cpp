#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    std::cout << "Original Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    bubbleSort(arr);

    std::cout << "\nSorted Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
