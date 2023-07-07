#include <bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n;

    // Create a map to store the swapped characters
    char swapMap[26];
    for (int i = 0; i < 26; i++) {
        swapMap[i] = 'A' + i;
    }

    // Read the swaps and update the map
    for (int i = 0; i < n; i++) {
    char a, b;
    cin >> a >> b;
    int index_a = a - 'A';
    int index_b = b - 'A';
    char temp = swapMap[index_a];
    swapMap[index_a] = swapMap[index_b];
    swapMap[index_b] = temp;
    }

    // Read the remaining code fragment and apply the swaps
    string s;
    getline(cin, s); // Consume the end of line character
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                cout << char(tolower(swapMap[toupper(s[i]) - 'A']));
            } else if (isupper(s[i])) {
                cout << swapMap[s[i] - 'A'];
            }
        } else {
            cout << s[i];
        }
    }

    return 0;
}
