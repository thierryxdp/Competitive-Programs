#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MAX = 9e+18 - 1;

int main(void){
    ll t;
    cin >> t;
    for (ll i = 0 ; i < t ; i++){
        ll n, k;
        cin >> n >> k;
        ll a = 1, b = MAX;
        while (a <= b){
            ll middle = (a+b)/2;
            ll remainder = middle%n;
            ll value = middle - remainder;
            ll divisors_n = value/n;
            ll not_divisors = middle - divisors_n;
            //cout << middle << " - " << remainder << " - " << value << " - " << divisors_n << " - " << not_divisors << '\n';
            if (not_divisors == k){
                if (middle % n == 0){
                    cout << middle - 1 << '\n';
                } else {
                    cout << middle << '\n';
                }
                break;
            } else if (not_divisors < k){
                a = middle + 1;
            } else {
                b = middle - 1;
            }
        }
    }
    
    return 0;
}