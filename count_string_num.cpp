#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countConsistentStrings(string allowed, vector<string>& words) {
    int count = 0;
    bool allowedChars[26] = {false};

    for (char c : allowed) {
        allowedChars[c - 'a'] = true;
    }

    for (string word : words) {
        bool consistent = true;
        for (char c : word) {
            if (!allowedChars[c - 'a']) {
                consistent = false;
                break;
            }
        }
        if (consistent) {
            count++;
        }
    }

    return count;
}

int main() {
    string allowed = "ab";
    vector<string> words = {"ad","bd","aaab","baa","badab"};

    int count = countConsistentStrings(allowed, words);
    cout << count << endl;

    return 0;
}
