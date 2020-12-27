#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> v;
    int t = n;
    while (t--){
        int a;
        cin >> a;
        v.push_back(a);
    }
    long long turns = 0;
    for (int i = 0; i < n - 1; i++){
        if (v[i+1] < v[i]){
            turns += (long long) v[i] - v[i+1];
            v[i+1] = v[i];
        }
    }
    cout << turns << endl;
    return 0;
}