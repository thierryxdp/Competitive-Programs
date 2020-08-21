#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        long long sum_moves = 0;
        long long i;
        for (i = 1; i <= (n-1)/2; i++){
            sum_moves += (i*i)*8;
        }
        cout << sum_moves << '\n';
    }
    return 0;
}