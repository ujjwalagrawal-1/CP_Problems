#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int countPermutations(string s, string p) {
    int sLen = s.length();
    int pLen = p.length();

    if (sLen < pLen) return 0;

    unordered_map<char, int> pFreq, sFreq;
    for (char c : p) pFreq[c]++;

    int left = 0, right = 0;
    int count = 0;
    int matched = 0;

    while (right < sLen) {
        char c = s[right];
        if (pFreq.find(c) != pFreq.end()) {
            sFreq[c]++;
            if (sFreq[c] == pFreq[c]) {
                matched++;
            }
        }

        // If window size equals pLen, check if permutation found
        if (right - left + 1 == pLen) {
            if (matched == pFreq.size()) {
                count++;
            }

            char leftChar = s[left];
            if (pFreq.find(leftChar) != pFreq.end()) {
                if (sFreq[leftChar] == pFreq[leftChar]) {
                    matched--;
                }
                sFreq[leftChar]--;
            }

            left++;
        }

        right++;
    }

    return count;
}

int main() {
    string s = "";
    string p = "";
    cin>>s>>p;

    int permutations = countPermutations(s, p);
    cout<< permutations << endl;

    return 0;
}
