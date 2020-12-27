#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(void){
    long long n;
    cin >> n;
    long long m = 1e+9 + 7;
    long long res = 1;
    for (int i = 1; i <= n; i++){
        res = (res * 2) % m;
    }
    if (res < 0) res += m;
    cout << res << endl;
}