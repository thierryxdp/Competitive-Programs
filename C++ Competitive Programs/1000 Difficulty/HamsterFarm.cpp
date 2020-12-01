#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(void){
    ll n, k, a;
    cin >> n >> k >> a;

    vector<ll> v;
    int best;
    v.push_back(a);
    best = 0;
    
    for (int i = 1; i < k ; i++){
        ll a;
        cin >> a;
        v.push_back(a);
            if ((n % a) < (n % v[best])) best = i;
    }
    
    cout << best + 1 << " " << n/v[best] << endl;
    return 0;
}