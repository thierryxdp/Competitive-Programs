#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t){
        int n;
        cin >> n;
        vector<int> v;
        int sum = n;
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int grannies = 1;
        for (int i = v.size() - 1; i >= 0; i--){
            if (v[i] > sum){
                sum--;
            } else {
                grannies++;
            }
        }
        cout << grannies << endl;
        t--;
    }
    
    return 0;
}