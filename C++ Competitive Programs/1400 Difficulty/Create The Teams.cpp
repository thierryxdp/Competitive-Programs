#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(void){
    int t;
    cin >> t;
    while (t--){
        ll n, x, i = 0;
        cin >> n >> x;
        ll array[n];    
        while (n--){
            ll a;
            cin >> a;
            array[i] = a;
            i++;
        }
        sort(array, array+i);
        ll sum = 0, number_teams = 0;
        for (int j = i - 1; j >= 0; j--){
            sum += 1;
            if (array[j] * sum >= x){
                number_teams++;
                sum = 0;
            }
        }
        cout << number_teams << '\n';
    }
    
    
    
    return 0;
}