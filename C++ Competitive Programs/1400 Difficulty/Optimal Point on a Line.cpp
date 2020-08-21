#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void){
    ll n;
    cin >> n;
    ll a[n];
    ll i;
    
    for (i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + i);
    
    ll middle = (n-1)/2;
    cout << a[middle] << '\n';
    
    return 0;
}

