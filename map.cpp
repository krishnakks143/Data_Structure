#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Declare a map with key as string and value as int
    map<string, int> my_map;

    // Add key-value pairs to the map
    my_map["apple"] = 10;
    my_map["banana"] = 20;
    my_map["orange"] = 30;

    // Access the values using keys
    cout << "The value of key 'apple' is " << my_map["apple"] << endl;
    cout << "The value of key 'banana' is " << my_map["banana"] << endl;

    // Iterate over the map and print the key-value pairs
    cout << "The map contains: " << endl;
    for (auto itr = my_map.begin(); itr != my_map.end(); itr++) {
        cout << itr->first << ": " << itr->second << endl;
    }

    // Check if a key exists in the map
    if (my_map.find("orange") != my_map.end()) {
        cout << "Key 'orange' exists in the map" << endl;
    }

    // Remove a key-value pair from the map
    my_map.erase("banana");

    // Clear all key-value pairs from the map
    my_map.clear();

    return 0;
}
