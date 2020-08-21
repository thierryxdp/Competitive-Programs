#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int sum[n];
    for (int i = 0; i < n; i++){
        int s;
        cin >> s;
        if (i == 0){
            sum[i] = s;
        } else {
            sum[i] = sum[i-1] + s;
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        int candies = 0;
        if (y > 2 && x == 1) candies = sum[y-1]/10;
        if (y > 2 && x >= 2) candies = (sum[y-1] - sum[x-2])/10;
        if (y == 2 && x == 2) candies = sum[y-1]/10;
        if (y <= 2 && x == 1) candies = sum[y-1]/10;
        cout << candies << '\n';
    }
    return 0;
}