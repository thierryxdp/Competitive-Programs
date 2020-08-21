#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, s;
        cin >> n >> s;
        int biggest = 0, sum = 0, position = 0;
        bool skipped = false;
        for (int j = 0 ; j < n ; j++){
            int a;
            cin >> a;
            if (a >= biggest && !skipped){
                biggest = a;
                position = j;
            }
            if (a + sum <= s){
                sum += a;
            } else if (a + sum - biggest <= s && !skipped){
                skipped = true;
                sum = -biggest + a;
            }
            
        }
        if (skipped){
            cout << position + 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}