#include <iostream>
using namespace std;

void test_case(int& tc) {
    string s;
    cin >> s;
    string word = "Yes";
    int index = -1;
    for (int i = 0; i < 3; i++) {
        if (word[i] == s[0]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "NO\n";
        return;
    }
    // cout << word[index] << "\n";
    bool checker = true;
    for (int i = 0; i < (int) s.size(); i++) {
        checker &= (s[i] == word[(index+i)%3]);
    }
    cout << (checker ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        test_case(tc);
    }
}
