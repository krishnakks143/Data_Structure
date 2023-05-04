#include <iostream>
#include <string>
#include <unordered_set>

int numJewelsInStones(std::string jewels, std::string stones) {
  std::unordered_set<char> jewelSet;

  // Insert each jewel character into the set
  for (char jewel : jewels) {
    jewelSet.insert(jewel);
  }

  int count = 0;

  // Count the number of stones that are jewels
  for (char stone : stones) {
    if (jewelSet.count(stone)) {
      ++count;
    }
  }

  return count;
}

int main() {
  std::string jewels = "aA";
  std::string stones = "aAAbbbb";

  int numJewels = numJewelsInStones(jewels, stones);

  std::cout << "There are " << numJewels << " jewels in the stones." << std::endl;

  return 0;
}
