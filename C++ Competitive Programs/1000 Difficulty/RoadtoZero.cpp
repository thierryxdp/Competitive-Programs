#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t){
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        long long ans = 0;
        if (b <= 2*a){
            x = abs(x);
            y = abs(y);
            if (x > y) ans = y*b + (x-y)*a;
            else if (y > x) ans = x*b + (y-x)*a;
            else ans = x*b;
        } else ans = (x+y)*a;
        cout << ans << endl;
        t--;
    }
    
    return 0;
}