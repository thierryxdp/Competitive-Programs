#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    getchar();
    char s[n+1];


    for (int i = 0; i < n; i++){
        char c = getchar();
        s[i] = c;
    }
    s[n] = '\0';
    char current = s[0];
    int is_diverse = 0;
    for (int i = 1; i < n; i++){
        if (s[i] != current) {
            cout << "YES" << endl;
            cout << current << s[i] << endl;
            is_diverse = 1;
            break;
        }
    }
   
    if (!is_diverse) cout << "NO" << endl;

    
    return 0;
}