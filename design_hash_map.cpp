#include <vector>

class HashMap {
private:
    struct Bucket {
        int key;
        int value;
        Bucket* next;
        Bucket(int key, int value) : key(key), value(value), next(nullptr) {}
    };
    
    std::vector<Bucket*> table;
    int size;
    const int INITIAL_SIZE = 10000;

    int hash(int key) {
        return key % size;
    }
    
public:
    HashMap() : size(INITIAL_SIZE) {
        table = std::vector<Bucket*>(size, nullptr);
    }
    
    void put(int key, int value) {
        int index = hash(key);
        if (table[index] == nullptr) {
            table[index] = new Bucket(key, value);
        } else {
            Bucket* curr = table[index];
            while (curr->next != nullptr && curr->key != key) {
                curr = curr->next;
            }
            if (curr->key == key) {
                curr->value = value;
            } else {
                curr->next = new Bucket(key, value);
            }
        }
    }
    
    int get(int key) {
        int index = hash(key);
        Bucket* curr = table[index];
        while (curr != nullptr && curr->key != key) {
            curr = curr->next;
        }
        if (curr == nullptr) {
            return -1;
        } else {
            return curr->value;
        }
    }
    
    void remove(int key) {
        int index = hash(key);
        Bucket* curr = table[index];
        Bucket* prev = nullptr;
        while (curr != nullptr && curr->key != key) {
            prev = curr;
            curr = curr->next;
        }
        if (curr != nullptr) {
            if (prev == nullptr) {
                table[index] = curr->next;
            } else {
                prev->next = curr->next;
            }
            delete curr;
        }
    }
};
