#include <iostream>
#include <string>
#include <vector>

using namespace std;

string truncate_sentence(string s, int k) {
    vector<string> words;
    string word = "";
    for (char c : s) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    vector<string> truncated_words(words.begin(), words.begin() + k);
    string truncated_sentence = "";
    for (int i = 0; i < truncated_words.size(); i++) {
        truncated_sentence += truncated_words[i];
        if (i < truncated_words.size() - 1) {
            truncated_sentence += " ";
        }
    }

    return truncated_sentence;
}

int main() {
    string s = "Hello how are you Contestant";
    int k = 4;
    string truncated_sentence = truncate_sentence(s, k);
    cout << truncated_sentence << endl;
    return 0;
}
