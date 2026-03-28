#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int maxLength = 0;

    // Check all substrings
    for (int i = 0; i < s.length(); i++) {
        string temp = "";

        for (int j = i; j < s.length(); j++) {
            // Check if character already exists in temp
            if (temp.find(s[j]) != string::npos) {
                break; // duplicate found
            }
            temp += s[j];
        }

        if (temp.length() > maxLength) {
            maxLength = temp.length();
        }
    }

    cout << "Longest substring length: " << maxLength << endl;

    return 0;
}