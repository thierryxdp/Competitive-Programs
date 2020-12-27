#include <bits/stdc++.h>

using namespace std;

int main(void){
    long long n;
    cin >> n;

    long long soma = ((1 + n)*n)/2;

    if (soma % 2 == 0){
        cout << "YES" << endl;
        long long soma_parcial = soma/2;
        long long best = 0;
        vector<int> v;
        for (int i = n; i >= 1; i--){
            if (best + i <= soma_parcial){ 
                best += i;
                v.push_back(i);
            }
        }
        cout << v.size() << endl;
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        int tam = n - v.size();
        cout << tam << endl;
        int contador = 0;
        for (int i = 1; i <= n; i++){
            if (i == v[contador]){
                contador++;
            } else {
                cout << i << " ";
            }
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
