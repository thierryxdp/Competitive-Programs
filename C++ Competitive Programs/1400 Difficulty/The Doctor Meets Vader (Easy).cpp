#include <bits/stdc++.h>

using namespace std;

int main(void){
    int s, b;
    cin >> s >> b;
    int array[s];
    for (int i = 0 ; i < s; i++){
        int a;
        cin >> a;
        array[i] = a;
    }
    
    vector <pair<int, int>> v;
    for (int i = 0; i < b; i++){
        int d, g;
        cin >> d >> g;
        v.push_back({d, g});

    }
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i <= (int) v.size(); i++){
        int holder = v[i].second;
        v[i].second += sum;
        sum += holder;
    }

    for (int i = 0; i < s; i++){
        
        if (array[i] >= v[v.size() - 1].first) {
            cout << v[v.size() - 1].second << '\n';
        } else if (array[i] < v[0].first) {
            cout << 0 << '\n';
        } else {
            int a = 0;
            int b = v.size();
            while (a <= b){
                int middle = (a+b)/2;
                if (v[middle].first <= array[i] && v[middle+1].first > array[i]){
                    cout << v[middle].second << '\n';
                    break;
                }

                if (v[middle].first > array[i]) b = middle - 1;
                else a = middle + 1;
            }
        }
        
        
    }
    
    return 0;
}