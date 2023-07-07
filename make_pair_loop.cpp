#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<std::pair<int, int>> pairs;

    for (int i = 0; i < numbers.size() - 1; i++) {
        auto new_pair = std::make_pair(numbers[i], numbers[i + 1]);
        pairs.push_back(new_pair);
    }

    for (auto pair : pairs) {
        std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }

    return 0;
}
