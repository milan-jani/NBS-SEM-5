#include <bits/stdc++.h>
using namespace std;

string unique_Adjacent(string s) {
    int n = s.size();
    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;  // O(n)
   

    int maxF = *max_element(freq.begin(), freq.end()); // O(26)  = O(1)
    if (maxF > (n + 1) / 2) return "Nope"; //1

    string ans; //1
    ans.reserve(n);//1

    for (int i = 0; i < n; ++i) {  // O(n)
        int pick = -1; //1
        for (int ch = 0; ch < 26; ++ch) { // O(26) = O(1)
            if (freq[ch] == 0) continue; //1
            char cc = char('a' + ch); //1
            if (!ans.empty() && ans.back() == cc) continue; //1

            if (pick == -1 or freq[ch] > freq[pick]) pick = ch; //1
        }
        ans.push_back(char('a' + pick));//1
        freq[pick]--;//1
    }
    return ans;//1
}  //final complexity = O(n) + O(n)*O(1) = O(n)

int main() {
    cout << unique_Adjacent("aaabbccc") << "\n"; 
    cout << unique_Adjacent("aaaaab") << "\n";  
    cout << unique_Adjacent("abbbbccc") << "\n"; 
    cout << unique_Adjacent("abbbbcc") << "\n";
    cout << unique_Adjacent("abacccc") << "\n";

    return 0;
}
