#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Declare an unordered_map with key as string and value as int
    unordered_map<string, int> my_hash_table;

    // Add key-value pairs to the hash table
    my_hash_table["apple"] = 10;
    my_hash_table["banana"] = 20;
    my_hash_table["orange"] = 30;

    // Access the values using keys
    cout << "The value of key 'apple' is " << my_hash_table["apple"] << endl;
    cout << "The value of key 'banana' is " << my_hash_table["banana"] << endl;

    // Iterate over the hash table and print the key-value pairs
    cout << "The hash table contains: " << endl;
    for (auto itr = my_hash_table.begin(); itr != my_hash_table.end(); itr++) {
        cout << itr->first << ": " << itr->second << endl;
    }

    // Check if a key exists in the hash table
    if (my_hash_table.find("orange") != my_hash_table.end()) {
        cout << "Key 'orange' exists in the hash table" << endl;
    }

    // Remove a key-value pair from the hash table
    my_hash_table.erase("banana");

    // Clear all key-value pairs from the hash table
    my_hash_table.clear();

    return 0;
}
