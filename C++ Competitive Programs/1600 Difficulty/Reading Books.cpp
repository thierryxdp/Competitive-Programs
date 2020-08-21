#include <bits/stdc++.h>

using namespace std;

vector<int> both_like;
vector<int> alice_like;
vector<int> bob_like;

int main(void){
    int n, k;
    cin >> n >> k;
    int alice_k = 0, bob_k = 0;
    for (int i = 0; i < n; i++){
        int t, a, b;
        cin >> t >> a >> b;
        if (a == 0 && b == 1){
            bob_like.push_back(t);
            bob_k++;
        } else if (a == 1 && b == 0){
            alice_like.push_back(t);
            alice_k++;
        } else if (a == 1 && b == 1){
            both_like.push_back(t);
            alice_k++;
            bob_k++;
        }
    }
    if (bob_k < k || alice_k < k){
        cout << -1 << '\n';
        return 0;
    }
    
    sort(both_like.rbegin(), both_like.rend());
    sort(alice_like.rbegin(), alice_like.rend());
    sort(bob_like.rbegin(), bob_like.rend());

    int time = 0;  

    while (k > 0){
        if (alice_like.empty() || bob_like.empty()){
            time += both_like.back();
            k--;
            both_like.pop_back();
        } else if (!both_like.empty()){
            if (both_like.back() <= alice_like.back() + bob_like.back()){
                time += both_like.back();
                k--;
                both_like.pop_back();
            } else {
                time += alice_like.back() + bob_like.back();
                k--;
                alice_like.pop_back();
                bob_like.pop_back();
            }
        } else if (both_like.empty()){
            time += alice_like.back() + bob_like.back();
            k--;
            alice_like.pop_back();
            bob_like.pop_back();
        }
    }
    
    cout << time << '\n';
    return 0;
}