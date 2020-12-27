#include <bits/stdc++.h>

using namespace std;

int main(void){
    string s;
    int longest = 0;
    int best = 0;
    cin >> s;
    char ch = s[0];
    for (auto c : s){
        if (ch == c) longest++;
        else {
            best = max(best, longest);
            ch = c;
            longest = 1;
        }
    }
    best = max(best, longest);
    cout <<  best << endl;
    return 0;
}