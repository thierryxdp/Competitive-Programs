#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(void){
    ll n, k;
    cin >> n >> k;
    long long array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    vector <ll> vec;

    for (int i = 1; i < n; i++){
        vec.push_back(array[i - 1] - array[i]);
    }

    sort(vec.begin(), vec.end());
    
    ll res = array[n - 1] - array[0];
    for (int j = 0; j < k - 1; j++){
        res+= vec[j];
    }

    cout << res << '\n';

    return 0;
}