#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> m;

    // Insertion

    // 1
    std::pair<std::string, int> p = std::make_pair("babbar", 3);
    m.insert(p);

    // 2
    std::pair<std::string, int> p2("love", 2);
    m.insert(p2);

    // 3
    m["mere"] = 1;

    // Update value
    m["mere"] = 2; //it will override the previous value

    // Accessing elements
    std::cout << m["mera"] << std::endl; // It will print 0 as it's not present in the map
    std::cout << m["babbar"] << std::endl; // It will print 3

    // Accessing elements using at() method
    std::cout << m.at("mera") << std::endl; // It will throw an exception as "mera" is not present in the map
    std::cout << m.at("babbar") << std::endl; // It will print 3

    // Size
    std::cout << m.size() << std::endl;

    // To check presence
    std::cout << m.count("love") << std::endl; // It will print 1

    // Erase
    m.erase("love");
    std::cout << m.size() << std::endl; // It will print 2

    // Iteration
    std::unordered_map<std::string, int>::iterator it = m.begin();

    while (it != m.end()) {
        std::cout << it->first << " " << it->second << std::endl;
        ++it;
    }

    return 0;
}
