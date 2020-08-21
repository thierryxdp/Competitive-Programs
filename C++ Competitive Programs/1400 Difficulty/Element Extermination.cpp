#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int first, last;
        for (int j = 0; j < n; j++){
            int a;
            cin >> a;
            if (j == 0){
                first = a;
            }
            if (j == n - 1){
                last = a;
            }
           
        }
        if (first < last) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

    return 0;
}