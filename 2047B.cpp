#include <bits/stdc++.h>
using namespace std;
pair<char, char> minMaxFrequencyChar(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    char maxChar = s[0];
    int maxFreq = freq[maxChar];
    for (auto &it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxChar = it.first;
        }
    }
    char minChar = '\0';
    int minFreq = INT_MAX;
    for (auto &it : freq) {
        if (it.first != maxChar && it.second < minFreq) {
            minFreq = it.second;
            minChar = it.first;
        }
    }
    return {minChar, maxChar};
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        auto p = minMaxFrequencyChar(s);
        char minc = p.first;
        char maxc = p.second;
        if (minc != '\0') {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == minc) {
                    s[i] = maxc;
                    break;
                }
            }
        }
        cout << s << endl;
    }
}