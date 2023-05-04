#include <iostream>
#include <set>

int main() {
  // Create a set of integers
  std::set<int> mySet;

  // Insert some values into the set
  mySet.insert(10);
   mySet.insert(10);
  mySet.insert(5);
  mySet.insert(20);

  // Check if a value is in the set
  if (mySet.count(10)) {
    std::cout << "The value 10 is in the set." << std::endl;
  }

  // Iterate over the set
  for (auto it = mySet.begin(); it != mySet.end(); ++it) {
    std::cout << *it << " ";
  }

  return 0;
}
