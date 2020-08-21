#include <bits/stdc++.h>

using namespace std;

int main(){
    int tests;
    cin >> tests;
    while (tests--){
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        int coins_n_needed = S/n;
        if (coins_n_needed <= a){
            S -= coins_n_needed*n;
        } else {
            S -= a*n;   
        }
        if (b >= S){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}