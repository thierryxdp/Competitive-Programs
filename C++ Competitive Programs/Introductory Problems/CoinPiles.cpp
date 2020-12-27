#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t--){
        long long a, b;
        cin >> a >> b;
        long long res = min(a, (a+b)/3);
        res = min(res, b);
        if ((a + b - 3 * res )== 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}
